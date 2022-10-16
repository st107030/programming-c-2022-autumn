#include <iostream>

int main(int args, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	int counter = 0;
	for (int x = 0; x < 1001; x++)
	{
		if ((a * x * x * x + b * x * x + c * x + d == 0) && (x != e))
		{
			counter++;
		}
	}
	std::cout << counter;
	return EXIT_SUCCESS;
}