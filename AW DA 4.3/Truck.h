#ifndef TRUCK
#define TRUCK
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
    double cargoCapacity;
public:
    Truck();
    Truck(string make, string  model, int year, double  cargoCapacity, Mover* mover);
    Truck(Truck& otherTruck);

    double getCargoCapacity();
    void setCargoCapacity(double cargoCapacity);

    string move() override;

    Truck& operator=(Truck& otherTruck);
    friend std::ostream& operator<<(std::ostream& strm, Truck& truck);

};
#endif