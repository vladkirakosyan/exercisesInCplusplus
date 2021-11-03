#ifndef CIRCLE_H
#define CIRCLE_H
class Circle {
public:
	Circle(): radius{} {}
	Circle(double rad) : radius{ rad } {}
	void setRadius(double rad) {
		radius = rad;
	}
	double getRadius() const {
		return radius;
	}
	double getArea() {
		return PI * radius * radius;
	}
	double getCircumference() {
		return 2 * PI * radius;
	}
private:
	double radius;
	const double PI = 3.14159;
};



#endif CIRCLE_H