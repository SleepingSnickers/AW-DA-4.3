#pragma once
#include <iostream>

#include "Mover.h"

using namespace std;
class Vehicle

{
private:
	string make;
	string model;
	int year;
	Mover* mover;

public:
	// constructors
	Vehicle();
	Vehicle(string make, string model, int year, Mover* mover);
	Vehicle(Vehicle& otherVehicle);

	string getMake();
	string getModel();
	int getYear();
	Mover* getMover();

	void setMake(string make);
	void setModel(string model);
	void setYear(int year);
	void setMover(Mover* mover);

	virtual string move() = 0;

	Vehicle& operator=(const Vehicle& otherVehicle);
	friend ostream& operator<<(ostream& strm, Vehicle& vehicle);

};
