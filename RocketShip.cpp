
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
    //
}
        
bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    return fuelCells.erase(cellNumber);
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount)
{
    return fuelCells.insert(cellNumber, fuelAmount);
}

string RocketShip::burnFuel(unsigned int cellNumber)
{
    //fuelCells.
    string hi = "*****";
    return hi;
}


//default constructor (initial values "RS NullPointer", 1000)
//saturn key 1069