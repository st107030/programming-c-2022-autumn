#include <iostream>

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;
	std::cin >> k;
	std::cin >> m;
	std::cin >> n;
	std::cout << ((k >= n) ?  m * 2 : ((n * 2 % k == 0) ? m * (n * 2 / k) : m * (1 + (n * 2 / k))));
	return EXIT_SUCCESS;
}