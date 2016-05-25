#creates the executable from both the object files
TitanTest: CinReader.o titan.o
	g++ -Wall -g -o TitanTest CinReader.o titan.o

SaturnTest: RocketShip.o saturn.o
	g++ -Wall -g -o SaturnTest RocketShip.o saturn.o
	
#creates the RocketShip object file
RocketShip: RocketShip RocketShip.h
	g++ -Wall -g -c RocketShip.cpp