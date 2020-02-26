studentData: main.o Student.o Address.o Date.o
	g++ main.o Student.o Address.o Date.o -o studentData
main.o: main.cpp
	g++ -c main.cpp
Student.o: Student.cpp Student.h Address.h Date.h
	g++ -c Student.cpp
Address.o: Address.cpp Address.h
	g++ -c Address.cpp
Date.o: Date.cpp Date.h
	g++ -c Date.cpp
run: studentData
	./studentData
valgrind:
	valgrind ./studentData
clean:
	rm *o
	rm studentData