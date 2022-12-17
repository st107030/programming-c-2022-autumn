#include <iostream>

int phi(int);

int main(int argc, char argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << phi(n);
	return EXIT_SUCCESS;
}

int phi(int n)
{
	if (n < 1)
	{
		return 0;
	}
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	return (phi(n - 1) + phi(n - 2));
}