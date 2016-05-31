#creates the executable from both the object files
TitanTest: CinReader.o titan.o
	g++ -Wall -g -o TitanTest CinReader.o titan.o


SaturnTest: RocketShip.o saturn.o CinReader.o
	g++ -Wall -g -o SaturnTest RocketShip.o saturn.o CinReader.o


JupiterTest: RocketShip.o jupiter.o CinReader.o
	g++ -Wall -g -o SaturnTest RocketShip.o jupiter.o CinReader.o
	
#creates the RocketShip object file
RocketShip: RocketShip RocketShip.h
	g++ -Wall -g -c RocketShip.cpp