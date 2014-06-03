test:fraction.o main.o
	g++ -o test fraction.o main.o
fraction.o: fraction.cpp fraction.h
	g++ -c fraction.cpp
main.o: main.cpp fraction.h
	g++ -c main.cpp
