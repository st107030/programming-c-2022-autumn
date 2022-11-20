#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100000]{ 0 };
	int minc = 0;
	int help = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] < a[minc])
		{
			minc = i;
		}
	}
	if (minc != 0)
	{
		for (int i = 0; i < minc / 2; i++)
		{
			help = a[i];
			a[i] = a[minc - i - 1];
			a[minc - i - 1] = help;
		}
		int x = minc;
		int y = n - 1;
		for (int i = 0; i < (y - x + 1) / 2; ++i)
		{
			help = a[x + i];
			a[x + i] = a[y - i];
			a[y - i] = help;
		}
		for (int i = 0; i < n / 2; i++)
		{
			help = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = help;
		}
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << ' ';
	}
	return EXIT_SUCCESS;
}