#creates the executable from both the object files
TitanTest: CinReader.o titan.o
	g++ -Wall -g -o TitanTest CinReader.o titan.o
