#include <iostream>
#include "Employee.h"

int main() {
	const int size = 3;
	Employee emp[size];
	
	for (int i = 0; i < size; ++i) {
		std::string n;
		std::cout << "Insert name: ";
		std::getline(std::cin, n);
		emp[i].setName(n);
		std::cout << "Insert surname: ";
		std::getline(std::cin, n);
		emp[i].setSurname(n);
		std::cout << "Insert address: ";
		std::getline(std::cin, n);
		emp[i].setAddress(n);
		std::cout << "Insert year of joining us: ";
		std::getline(std::cin, n);
		emp[i].setYearOfJoining(n);
	}
	std::cout << "Name\tSurname\tYear\tAddress\n";
	for (int i = 0; i < size; ++i) {
		std::cout << emp[i].getName() << '\t' << emp[i].getSurname() << '\t' 
			<< emp[i].getYear() << '\t' << emp[i].getAddress() << std::endl;
	}


	return 0;
}