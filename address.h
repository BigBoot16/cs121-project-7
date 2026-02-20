#include <string>

#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

class Address {
	private:
		std::string street;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string iStreet, std::string iCity, std::string iState, std::string iZip);
		void printAddress();
};

#endif
