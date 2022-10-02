#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int cos = 0;
	int max = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
	{
		std::cout << "impossible";
	}
	else
	{
		max = (a > b ? a : b);
		max = (max > c ? max : c);
		if (max == c)
		{
			cos = (a * a + b * b - c * c) / 2 * a * b;
		}
		if (max == b)
		{
			cos = (a * a + c * c - b * b) / 2 * a * c;
		}
		if (max == a)
		{
			cos = (b * b + c * c - a * a) / 2 * b * c;
		}
		if (cos == 0)
		{
			std::cout << "right";
		}
		else
		{
			if (cos > 0)
			{
				std::cout << "acute";
			}
			else
			{
				std::cout << "obtuse";
			}
		}
	}
	return EXIT_SUCCESS;
}