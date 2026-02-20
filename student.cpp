#include <iostream>
#include <sstream>

#include "address.h"
#include "date.h"
#include "student.h"

Student::Student() {
	firstName = "John";
	lastName = "Doe";
	creditHours = 0;
}

void Student::init(std::string studentString) {
	//create stringstream and temp variables
	std::stringstream converter;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string sBirth;
	std::string sGrad;
	std::string sCredits;

	converter.str(studentString);
	getline(converter, firstName, ',');
	getline(converter, lastName, ',');
	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');
	getline(converter, sBirth, ',');
	getline(converter, sGrad, ',');
	getline(converter, sCredits);

	address.init(street, city, state, zip);
	birthDate.init(sBirth);
	gradDate.init(sGrad);

	converter.clear();
	converter.str("");
	converter << sCredits;
	converter >> creditHours;
}

void Student::printStudent() {
	std::cout << firstName << " " << lastName << std::endl;
	address.printAddress();
	std::cout << "DOB: ";
	birthDate.printDate();
	std::cout << "Grad: ";
	gradDate.printDate();
	std::cout << "Credits: " << creditHours;
}

std::string Student::getLastFirst() {
	std::string lastFirst = "____________________________________\n \n" + lastName + ", " + firstName + "\n";
	return lastFirst;
}
