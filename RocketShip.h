
#include <iostream>
#include <vector>
using namespace std;

class RocketShip
{
    private:
        string name;
        
        unsigned int fuel;
        
        vector<unsigned int> fuelCells;
        
    public:
        RocketShip();
        
        void setName(string the_name);
        
        string getName() const;
        
        void setFuel(unsigned int the_fuel);
        
        unsigned int getFuel() const;
        
        void addFuelCell(unsigned int fuelAmount);
        
        bool removeFuelCell(unsigned int cellNumber);

        bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
    
        string burnFuel(unsigned int cellNumber);
};


/*
new private data members
    vector<unsigned int> fuelCells

new public function interface
    void addFuelCell(unsigned int fuelAmount)
    bool removeFuelCell(unsigned int cellNumber)

    bool addFuelToCell(unsigned int cellNumber,
                       unsigned int fuelAmount)

    string burnFuel(unsigned int cellNumber)

*/


/*
private data members
                name, string
                fuel, unsigned int

public function interface
        default constructor (initial values "RS NullPointer", 1000)
        setName,getName
        setFuel,getFuel
        */