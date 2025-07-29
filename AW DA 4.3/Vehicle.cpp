#include "Vehicle.h"

Vehicle::Vehicle() : mover(nullptr) {
	make = "unknown";
	model = "unknown";
	year = 0;
}
Vehicle::Vehicle(string make, string model, int year, Mover* mover) {
	this->make = make;
	this->model = model;
	this->year = year;
	this->mover = mover;
}
Vehicle::Vehicle(Vehicle& otherVehicle) {
	if (this != &otherVehicle) {
		this->make = otherVehicle.make;
		this->model = otherVehicle.model;
		this->year = otherVehicle.year;
		this->mover = otherVehicle.mover;
	}
}

string Vehicle::getMake() {
	return make;
}
string Vehicle::getModel() {
	return model;
}
int Vehicle::getYear() {
	return year;
}
Mover* Vehicle::getMover() {
	return mover;
}
void Vehicle::setMake(string make) {
	this->make = make;
}
void Vehicle::setModel(string model) {
	this->model = model;
}
void Vehicle::setYear(int year) {
	this->year = year;
}
void Vehicle::setMover(Mover* mover) {
	this->mover = mover;
}

Vehicle& Vehicle::operator=(const Vehicle& otherVehicle) {
	if (this != &otherVehicle) {
		this->make = otherVehicle.make;
		this->model = otherVehicle.model;
		this->year = otherVehicle.year;
		this->mover = otherVehicle.mover;
	}
	return *this;
}
std::ostream& operator<<(std::ostream& strm, Vehicle& vehicle) {
	strm << "A " << vehicle.getYear() << " "
		<< vehicle.getMake() << " "
		<< vehicle.getModel();
	return strm;
}