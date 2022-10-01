#include <iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	std::cin >> x;
	int n = 0;
	n = x * x;
	std::cout << (n + x) * (n + 1) + 1;
	return EXIT_SUCCESS;
}