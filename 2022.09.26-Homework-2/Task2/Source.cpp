#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << ((n % 400 == 0) ? "YES" : ((n % 4 == 0) && (n % 100 > 0)) ? "YES" : "NO");
	return EXIT_SUCCESS;
}