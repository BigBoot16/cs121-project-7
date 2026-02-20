#include <iostream>
#include "address.h"

Address::Address(){
	street = "123 Place Place";
	city = "Holderton";
	state = "CA";
	zip = "12345";
} //end constructor

void Address::init(std::string iStreet, std::string iCity, std::string iState, std::string iZip){
	street = iStreet;
	city = iCity;
	state = iState;
	zip = iZip;
}

void Address::printAddress(){
	std::cout << street << std::endl;
	std::cout << city << " " << state << ", " << zip << std::endl;
}
