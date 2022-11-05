#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sdvig = 0;
	std::cin >> n;
	int a[100000]{ 0 };
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	std::cin >> k;
	if (k >= 0)
	{
		sdvig = k % n;
	}
	else
	{
		sdvig = n - ((-1) * k % n);
	}
	for (int i = n - sdvig; i < n; i++)
	{
		std::cout << a[i] << ' ';
	}
	for (int i = 0; i < n - sdvig; i++)
	{
		std::cout << a[i] << ' ';
	}
	return EXIT_SUCCESS;
}