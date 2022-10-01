#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int n = 0;
	std::cin >> v;
	std::cin >> t;
	n = v * t;
	int l = 0;
	l = n % 109;
	std::cout << (l + 109) % 109;
	return EXIT_SUCCESS;
}