#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int i = 1;
	int j = 1;
	int c = 1;
	do
	{
		if (c == n)
		{
			std::cout << i << std::endl;
			j++;
			i = j;
			c = 0;
		}
		else
		{
			std::cout << i << ' ';
			i++;
		}
		c++;
		if (j > n)
		{
			break;
		}
	} while (c <= n);
	return EXIT_SUCCESS;
}