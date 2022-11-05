#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[1000]{ 0 };
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	int m = 0;
	std::cin >> m;
	int k = 0;
	int j = 0;
	for (int i = 0; i < m; i++)
	{
		std::cin >> k;
		k -= 1;
		std::cin >> j;
		j -= 1;
		for (int g = k; g < j + 1; g++)
		{
			if (g != j)
			{
				std::cout << a[g] << ' ';
			}
			else
			{
				std::cout << a[g] << std::endl;
			}
		}
	}
	return EXIT_SUCCESS;
}