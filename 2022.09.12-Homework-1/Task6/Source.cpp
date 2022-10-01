#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n;
	k = n % 2;
	std::cout << n + 2 - k;
	return EXIT_SUCCESS;
}