student:class.o course.o main.o student.o
	g++ -o student_III class.o course.o main.o student.o
class.o: class.cpp student.h course.h class.h
	g++ -c class.cpp
course.o: course.cpp course.h
	g++ -c course.cpp
main.o: main.cpp student.h course.h class.h
	g++ -c main.cpp
student.o: student.cpp student.h
	g++ -c student.cpp
clean:
	rm *.o
