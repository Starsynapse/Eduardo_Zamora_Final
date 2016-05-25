
#include <iostream>
using namespace std;

class RocketShip
{
    private:
        string name;
        
        unsigned int fuel;
        
    public:
        RocketShip();
        
        void setName(string the_name);
        
        string getName();
        
        void setFuel(int the_fuel);
        
        unsigned int getFuel();
};



/*
private data members
                name, string
                fuel, unsigned int

public function interface
        default constructor (initial values "RS NullPointer", 1000)
        setName,getName
        setFuel,getFuel
        */