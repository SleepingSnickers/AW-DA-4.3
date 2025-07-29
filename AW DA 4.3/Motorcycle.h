#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

#include <iostream>
#include <string>

class Motorcycle : public Vehicle {
private:
  double engineCC;

public:
  // Constructors
  Motorcycle();
  Motorcycle(std::string make, std::string model, int year, double engineCC, Mover* mover);
  Motorcycle(Motorcycle& otherMotorcycle);

  // Getter and Setter
  double getEngineCC() const;
  void setEngineCC(double engineCC);

  string move() override;

  // Assignment operator
  Motorcycle& operator=(const Motorcycle& otherMotorcycle);

  // Friend function for output operator
  friend std::ostream& operator<<(std::ostream& strm, const Motorcycle& motorcycle);
};

#endif // MOTORCYCLE_H 