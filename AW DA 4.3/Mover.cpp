#include "Mover.h"

#include <iostream>
#include <string>

using namespace std;

Mover::Mover() {
	mph = 0.0;

}

Mover::Mover(double mph) {
	this->mph = mph;
}

string Mover::move() {
	return "Slids across the floor at " + to_string(mph) + " MPH";
}

double Mover::getMPH() {
	return mph;
}

void Mover::setMPH(double mph) {
	this->mph = mph;
}