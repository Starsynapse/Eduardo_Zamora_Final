
#include "RocketShip.h"

RocketShip::RocketShip()
{
    name = "RS NullPointer";
    fuel = 1000;
}
        
void RocketShip::setName(string the_name)
{
    name = the_name;
}

string RocketShip::getName() const
{
    return name;
}

void RocketShip::setFuel(unsigned int the_fuel)
{
    fuel = the_fuel;
}

unsigned int RocketShip::getFuel() const
{
    return fuel;
}

void RocketShip::addFuelCell(unsigned int fuelAmount)
{
    fuelCells.push_back(fuelAmount);
}
        
bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    if ()
    fuelCells.erase(fuelCells.begin() + cellNumber);
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    fuelCells.insert(fuelCells.begin() + cellNumber, fuelAmount);
}

string RocketShip::burnFuel(unsigned int cellNumber)
{
    fuelCells.
    string hi = "*****";
    return hi;
}


//saturn key 1069