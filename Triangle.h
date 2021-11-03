#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <cmath>

class Triangle {

public:
	explicit Triangle(double a, double b, double c) : x{ a }, y{ b }, z{ c }{}

	double area() {
		double p = (x + y + z) / 2;
		return sqrt(p * (p - x) * (p - y) * (p - z));
	}
private:
	double x;
	double y;
	double z;
};
#endif // TRIANGLE_H
