#include <iostream>

int main(int args, char* argv[])
{
	int t = 0;
	std::cin >> t;
	int j = 1;
	int k = 0;
	for (int i = 1; i <= t; i++)
	{
		std::cout << j << ' ';
		k++;
		if (k == j)
		{
			j++;
			k = 0;
		}
	}
	return EXIT_SUCCESS;
}