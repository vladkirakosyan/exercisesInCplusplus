#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double PI = 3.141596;
	double radius;

	cout << "Enter radius(m) " << endl;
	cin >> radius;
	cout << "Area of a circle is " << PI * pow(radius, 2) << " m2" << endl;
	cout << "Length of a circle is " << PI * radius * 2 << " meters" << endl;
}
//if we store the result of the last 2 values in integer type, we shall have warnings, 
//our program will compile the same way, but the answers we shall get in integer data type