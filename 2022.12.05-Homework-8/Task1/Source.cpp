#include <iostream>

int minPlus(int, int, int, int); //if min >= 0
int minMin(int, int, int, int); //if min < 0

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;

	if ((a >= 0) && (b >= 0) && (c >= 0) && (d >= 0))
	{
		std::cout << minPlus(a, b, c, d);
	}
	else
	{
		std::cout << minMin(a, b, c, d);
	}
	return EXIT_SUCCESS;
}

int minPlus(int a, int b, int c, int d)
{
	if (a * b * c * d == 0)
	{
		return 0;
	}
	return (1 + minPlus(a - 1, b - 1, c - 1, d - 1));
}

int minMin(int a, int b, int c, int d)
{
	if ((a * b * c * d == 0) && (a >= 0) && (b >= 0) && (c >= 0) && (d >= 0))
	{
		return 0;
	}
	return (-1 + minMin(a + 1, b + 1, c + 1, d + 1));
}