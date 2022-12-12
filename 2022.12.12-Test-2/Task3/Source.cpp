#include <iostream>

void Prime(int, int);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	Prime(n, 2);
	return EXIT_SUCCESS;
}

void Prime(int n, int del)
{
	if (del * del > n)
	{
		std::cout << "prime";
		return;
	}
	if (n % del == 0)
	{
		std::cout << "composite";
		return;
	}
	Prime(n, del + 1);
}