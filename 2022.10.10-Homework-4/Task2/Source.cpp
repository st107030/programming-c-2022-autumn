#include <iostream>

int main(int args, char* argv[])
{
	int dv = 0;
	int help = 1;
	int des = 0;
	std::cin >> dv;
	for (int i = 1; i <= 10; ++i)
	{
		des += (dv % 10 * help);
		dv /= 10;
		help *= 2;
	}
	std::cout << des;
	return EXIT_SUCCESS;
}