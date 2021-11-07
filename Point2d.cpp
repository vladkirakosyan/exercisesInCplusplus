#include <iostream>
#include <string>

class Point {
public:
	Point() : x{}, y{} 
	{}
	Point(double, double);
	Point operator+(const Point& obj);
	Point operator-(const Point& obj);
	Point operator*(const Point& obj);
	Point operator/(const Point& obj);
	bool operator>(const Point& obj);
	bool operator<(const Point& obj);
	bool operator==(const Point& obj);
	bool operator!=(const Point& obj);

	friend std::ostream& operator<<(std::ostream& os, const Point& obj);
private:
	double x;
	double y;
};

Point::Point(double _x, double _y) : x{_x}, y{_y}
{
	x = _x;
	y = _y;
}
Point Point::operator+(const Point& obj)
{
	Point tmp;
	tmp.x = x + obj.x;
	tmp.y = y + obj.y;
	return tmp;
}

Point Point::operator-(const Point& obj)
{
	Point tmp;
	tmp.x = x - obj.x;
	tmp.y = y - obj.y;
	return tmp;
}

Point Point::operator*(const Point& obj)
{
	Point tmp;
	tmp.x = x * obj.x;
	tmp.y = y * obj.y;
	return tmp;
}
Point Point::operator/(const Point& obj)
{
	Point tmp;
	tmp.x = x / obj.x;
	tmp.y = y / obj.y;
	return tmp;
}
bool Point::operator>(const Point& obj)
{
	return x > obj.x && y > obj.y ? true : false;
}
bool Point::operator<(const Point& obj)
{
	return x < obj.x&& y < obj.y ? true : false;
}
bool Point::operator==(const Point& obj)
{
	return x == obj.x && y == obj.y ? true : false;
}
bool Point::operator!=(const Point& obj)
{
	return x != obj.x && y != obj.y ? true : false;
}
std::ostream& operator<<(std::ostream& os, const Point& obj)
{
	os << "x = " << obj.x << " y = " << obj.y << std::endl;
	return os;
}

int main() {
	Point a(3.4, 2.2);
	Point b(2.4, 7.7);
	Point x(1, 1);

	Point y;


	y = a * b * a;
	std::cout << x;
	std::cout << y;

	if (x == y)
	{
		std::cout << "yes\n";
	}
	else {
		std::cout << "no\n";
	}
	if (x < y)
	{
		std::cout << "yes\n";
	}
	else {
		std::cout << "no\n";
	};

	return 0;
}