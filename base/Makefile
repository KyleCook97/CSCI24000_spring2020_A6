studentData: main.o Student.o
	g++ main.o Student.o -o studentData
main.o: main.cpp
	g++ -c main.cpp
Student.o: Student.cpp Student.h
	g++ -c Student.cpp
run: studentData
	./studentData
valgrind:
	valgrind studentData
clean:
	rm *o
	rm studentData