#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;
	int k = a / b;
	int l = b / a;
	std::cout << (a * k + b * l) / (k + l);
	return EXIT_SUCCESS;
}