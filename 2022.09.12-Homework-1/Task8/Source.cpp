#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> a1;
	std::cin >> b1;
	std::cin >> c1;
	std::cout << (a1 - a) * 3600 + (b1 - b) * 60 + (c1 - c);
	return EXIT_SUCCESS;
}