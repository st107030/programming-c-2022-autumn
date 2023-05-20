#include <iostream>
#include <ostream>
#include <cmath>

class Complex {
private:
	double re;
	double im;

	double abs_c()
	{
		//std::cout << re * re + im * im << std::endl;
		return(re * re + im * im);
	};
	Complex reversed()
	{
		double m = abs_c();
		//std::cout << re / m << " " << -1 * im / m << std::endl;
		return Complex(re / m, -1 * im / m);
	}

public:
	Complex(double re = 0, double im = 0) : re(re), im(im) {}
	Complex(const Complex& num) : re(num.re), im(num.im) {}
	~Complex() {};

	Complex conj()
	{
		return(Complex(re, -1 * im));
	};
	double abs()
	{
		return sqrt(abs_c());
	};

	Complex operator+(double d)
	{
		return Complex(re + d, im);
	};
	Complex operator-(double d)
	{
		return Complex(re - d, im);
	};
	Complex operator*(double d)
	{
		return Complex(re * d, im * d);
	};
	Complex operator/(double d)
	{
		if (d != 0)
		{
			return Complex(re / d, im / d);
		}
		else
		{
			std::cout << "Division by zero is forbidden.";
			exit;
		}
	};

	friend Complex operator+(double d, Complex c)
	{
		return Complex(d + c.re, c.im);
	};
	friend Complex operator-(double d, Complex c)
	{
		return Complex(d - c.re, -1 * c.im);
	};
	friend Complex operator*(double d, Complex c)
	{
		return Complex(d * c.re, d * c.im);
	};
	friend Complex operator/(double d, Complex c)
	{
		if (c.abs() != 0)
		{
			return(d * c.reversed());
		}
		else
		{
			std::cout << "Division by zero is forbidden.";
			exit;
		}
	};


	Complex operator+(Complex c)
	{
		return Complex(re + c.re, im + c.im);
	};
	Complex operator-(Complex c)
	{
		return Complex(re - c.re, im - c.im);
	};
	Complex operator*(Complex c)
	{
		return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
	};
	Complex operator/(Complex c)
	{
		if (c.abs() != 0)
		{
			Complex cr = c.reversed();
			return Complex(re * cr.re - im * cr.im, re * cr.im + im * cr.re);
		}
		else
		{
			std::cout << "Division by zero is forbidden.";
			exit;
		}
	};

	Complex operator=(const Complex& c)
	{
		return Complex(c.re, c.im);
	};
	friend std::ostream& operator<<(std::ostream& stream, const Complex& c)
	{
		stream << "(" << c.re << "," << c.im << ")";
		return stream;
	};
};

int main(int argc, char* argv[])
{
	Complex a = Complex(3, 4);
	Complex b = Complex(1, -3);
	double s = 0;
	double f = 2;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl;

	std::cout << a << " + " << f << " = " << a + f << std::endl;
	std::cout << f << " / " << a << " = " << f / a << std::endl;
	std::cout << a << " * " << f << " = " << a * f << std::endl;

	return EXIT_SUCCESS;
}