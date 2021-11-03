#include "Complex.h"

Complex::Complex(double real, double imag) : real_num{real}, imaginary_num{imag}
{}

Complex Complex::operator+(const Complex& c1)
{
	Complex c3;
	c3.real_num = this->real_num + c1.real_num;
	c3.imaginary_num = this->real_num + c1.imaginary_num;
	return c3;
}

Complex Complex::operator-(const Complex& c1)
{
	Complex c3;
	c3.real_num = this->real_num - c1.real_num;
	c3.imaginary_num = this->imaginary_num - c1.imaginary_num;
	return c3;
}

Complex Complex::operator*(const Complex& c1)
{
	Complex c3;
	c3.real_num = real_num * c1.real_num - imaginary_num * c1.imaginary_num;
	c3.imaginary_num = this->real_num * c1.imaginary_num + this->imaginary_num * c1.real_num;
	return c3;
}

void Complex::set_real_num(double real)
{
	real_num = real;
}
void Complex::set_imag_num(double imag)
{
	imaginary_num = imag;
}
double Complex::get_real_num() const
{
	return real_num;
}
double Complex::get_imag_num() const
{
	return imaginary_num;
}