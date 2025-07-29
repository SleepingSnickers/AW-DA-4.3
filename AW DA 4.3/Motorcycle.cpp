#include "Motorcycle.h"

// Default constructor
Motorcycle::Motorcycle() : Vehicle(), engineCC(0.0) {}

// Parameterized constructor
Motorcycle::Motorcycle(std::string make, std::string model, int year, double engineCC, Mover* mover)
  : Vehicle(make, model, year, mover), engineCC(engineCC) {
}

// Copy constructor
Motorcycle::Motorcycle(Motorcycle& other) : Vehicle(other), engineCC(other.engineCC) {}

// Getter for engineCC
double Motorcycle::getEngineCC() const {
  return engineCC;
}

// Setter for engineCC
void Motorcycle::setEngineCC(double engineCC) {
  this->engineCC = engineCC;
}

string Motorcycle::move() {
    return getMover()->move();
}

// Assignment operator
Motorcycle& Motorcycle::operator=(const Motorcycle& otherMotorcycle) {
    if (this != &otherMotorcycle) {
        Vehicle::operator=(otherMotorcycle);
        engineCC = otherMotorcycle.engineCC;
    }
    return *this;
}

// Output operator
std::ostream& operator<<(std::ostream& strm, Motorcycle& motorcycle) {
    strm << static_cast<Vehicle&>(motorcycle) << " with engine " << motorcycle.getEngineCC() << " cc";
    return strm;
}