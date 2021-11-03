#include <iostream>
#include "Complex.h"

int main() {
	Complex a;
	a.set_imag_num(23.44);
	a.set_real_num(44);

	Complex b(4.5, 2);
	Complex d;

	d = a * b;
	Complex aa = a - b;
	std::cout << "aa real- " << aa.get_real_num() << std::endl;
	std::cout << "aa imag- " << aa.get_imag_num() << std::endl;

	std::cout << "d real- " << d.get_real_num() << std::endl;
	std::cout << "d imag - " << d.get_imag_num() << std::endl;


	return 0;
}