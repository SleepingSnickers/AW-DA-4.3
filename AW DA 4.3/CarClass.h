#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle{
private:
	int passengerCapacity;
public:
	Car();
	Car(string make, string model, int year, int passengerCapacity, Mover* mover);
	Car(Car& otherCar);

	int getPassengerCapacity();
	void setPassengerCapacity(int passengerCapacity);

	string move() override;

	Car& operator=(Car& otherCar);
	friend ostream& operator<<(ostream& strm, Car& car);
};













#endif
