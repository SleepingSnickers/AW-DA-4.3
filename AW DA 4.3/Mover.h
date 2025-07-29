#ifndef MOVER
#define MOVER

#include <iostream>
#include <string>

using namespace std;

class Mover {
protected:
	double mph;

public:
	Mover();
	Mover(double);
	virtual string move() = 0;
	double getMPH();
	void setMPH(double);
};

#endif
