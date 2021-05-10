#include <iostream>
int main() {
	using namespace std;
	cout << "These answers will be different in various OS-s and in 32bit processors\n";
	cout << "sizeof int data type are " << sizeof(int) << " bytes\n";
	cout << "sizeof unsigned int data type are " << sizeof(unsigned int) << " bytes\n";
	cout << "sizeof short int data type are " << sizeof(short int) << " bytes\n";
	cout << "sizeof unsigned short int data type are " << sizeof(unsigned short int) << " bytes\n";	
	cout << "sizeof long int data type are " << sizeof(long int) << " bytes\n";
	cout << "sizeof unsigned long int data type are " << sizeof(unsigned long int) << " bytes\n";
	cout << "The greatest number we can put in (short int) is 32767\n";
	short int higherNumber = 32768; // we shall get a number -32678, and the more we 
	// will take the greater negative number we will get 
	cout << higherNumber << endl;
}