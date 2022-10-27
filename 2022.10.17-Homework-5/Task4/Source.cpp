#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[1000]{ 0 };
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	int maxc = 0;
	if (a[0] + a[1] + a[n - 1] > a[n - 1] + a[n - 2] + a[0])
	{
		maxc = a[0] + a[1] + a[n - 1];
	}
	else
	{
		maxc = a[n - 1] + a[n - 2] + a[0];
	}
	for (int i = 1; i < n-1; i++)
	{
		if (a[i - 1] + a[i] + a[i + 1] > maxc)
		{
			maxc = a[i - 1] + a[i] + a[i + 1];
		}
	}
	std::cout << maxc;
	return EXIT_SUCCESS;
}