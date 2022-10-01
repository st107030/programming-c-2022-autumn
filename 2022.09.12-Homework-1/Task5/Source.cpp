#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << (n % 10 + n / 10 % 10 + n / 100);
	return EXIT_SUCCESS;
}