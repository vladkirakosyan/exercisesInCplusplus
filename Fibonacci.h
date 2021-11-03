#ifndef FIBONACCI_H
#define FIBONACCI_H

class Fibonacci {
public:
	Fibonacci() : x{ 0 }, y{ 1 }, z{ x + y } {}
	int generator(int index) {
		while (index--) {
			z = x + y;
			x = y;
			y = z;
		}
		return x;
	}
private:
	int x;
	int y;
	int z;
};

#endif FIBONACCI_H