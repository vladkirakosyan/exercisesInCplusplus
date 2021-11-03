#include <iostream>
#include "Student.h"

int main() {

	const int SIZE = 2;
	Student* p = new Student[SIZE];
	std::cout << "Insert name and surname for " << SIZE << " students.\n";
	for (int i = 0; i < SIZE; ++i) {
		char name[20];
		char surname[40];

		std::cout << "Enter student's name: ";
		std::cin.getline(name, 20);
		p[i].setName(name);
		std::cout << "Enter student's surname: ";
		std::cin.getline(surname, 40);
		p[i].setSurname(surname);
	}

	for (int i = 0; i < SIZE; ++i) {
		p[i].getName();
		p[i].getSurname();
	}
		

	delete[] p;
	p = nullptr;
	return 0;
}