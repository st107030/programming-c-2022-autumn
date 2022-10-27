#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[1000]{ 0 };
	int curr = 0;
	int minc = 10000;
	int maxc = -10000;
	for (int i = 0; i < n; i++)
	{
		std::cin >> curr;
		a[i] = curr;
		if (curr < minc)
		{
			minc = curr;
		}
		if (curr > maxc)
		{
			maxc = curr;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == maxc)
		{
			a[i] = minc;
		}
		std::cout << a[i] << ' ';
	}
	return EXIT_SUCCESS;
}