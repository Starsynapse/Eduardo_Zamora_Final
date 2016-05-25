
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

string RocketShip::getName()
{
    return name;
}

void RocketShip::getFuel(int the_fuel)
{
    fuel = the_fuel;
}

unsigned int RocketShip::getFuel()
{
    return fuel;
}


//default constructor (initial values "RS NullPointer", 1000)