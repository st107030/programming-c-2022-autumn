#include <iostream>

int PNum(int);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (PNum(n) > 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}

int PNum(int n)
{
	if (n < 1)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return (PNum(n - 3) + PNum(n - 5));
}