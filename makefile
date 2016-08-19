Point:	mipuntito.o mimensito.o
	g++ mipuntito.o mimensito.o -o point
mimensito.o:	Pokedex.cpp Pokemon.h 
	g++ -c Pokedex.cpp -o mimensito.o
mipuntito.o:	Pokemon.cpp Pokemon.h 
	g++ -c Pokemon.cpp -o mipuntito.o
