#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
	Complex(double, double);
	Complex() = default;
public:
	void set_real_num(double);
	void set_imag_num(double);
	double get_real_num() const;
	double get_imag_num() const;

	Complex operator+(const Complex& c1);
	Complex operator-(const Complex& c1);
	Complex operator*(const Complex& c1);
private:
	double real_num;
	double imaginary_num;
};

#endif // COMPLEX_H