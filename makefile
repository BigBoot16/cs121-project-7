dataTest: main.o date.o address.o student.o
	g++ -g main.o date.o address.o student.o -o dataTest

main.o: main.cpp date.h address.h student.h
	g++ -g -c main.cpp

date.o: date.h date.cpp
	g++ -g -c date.cpp

address.o: address.h address.cpp
	g++ -g -c address.cpp

student.o: student.h student.cpp
	g++ -g -c student.cpp

clean:
	rm *.o
	rm dataTest

run: dataTest
	./dataTest

valgrind: dataTest
	valgrind --leak-check=full ./dataTest

debug: dataTest
	gdb dataTest
