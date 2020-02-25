studentData: main.o Student.o Address.o
	g++ main.o Student.o Address.o -o studentData
main.o: main.cpp
	g++ -c main.cpp
Student.o: Student.cpp Student.h
	g++ -c Student.cpp
Address.o: Address.cpp Address.h
	g++ -c Address.cpp
run: studentData
	./studentData
valgrind:
	valgrind ./studentData
clean:
	rm *o
	rm studentData