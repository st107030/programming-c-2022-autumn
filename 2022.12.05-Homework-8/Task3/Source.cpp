#include <iostream>

int C(int, int);

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	std::cin >> n;
	std::cin >> k;
	std::cout << C(n, k);
	return EXIT_SUCCESS;
}

int C(int n, int k)
{
	if (k > n)
	{
		return 0;
	}
	if ((k == n) || (k == 0))
	{
		return 1;
	}
	return (C(n - 1, k - 1) + C(n - 1, k));
}