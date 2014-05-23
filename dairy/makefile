all: pdlist pdshow pdremove pdadd
pdlist: sqlite3.o dairy.o list.o
	g++ sqlite3.o dairy.o list.o -o pdlist
pdshow: sqlite3.o dairy.o show.o
	g++ sqlite3.o dairy.o show.o -o pdshow
pdremove: sqlite3.o dairy.o remove.o
	g++ sqlite3.o dairy.o remove.o -o pdremove
pdadd: sqlite3.o dairy.o add.o
	g++ sqlite3.o dairy.o add.o -o pdadd
sqlite3.o: sqlite3.c
	gcc -c sqlite3.c
dairy.o: dairy.cpp dairy.h sqlite3.h
	g++ -c dairy.cpp
list.o: list.cpp dairy.h sqlite3.h
	g++ -c list.cpp
show.o: show.cpp dairy.h sqlite3.h
	g++ -c show.cpp
remove.o: remove.cpp dairy.h sqlite3.h
	g++ -c remove.cpp
add.o: add.cpp dairy.h sqlite3.h
	g++ -c add.cpp
clean:
	rm *.o *.exe
