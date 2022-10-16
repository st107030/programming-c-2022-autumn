#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int i = 1;
	int j = 1;
	int c = 1;
	int k = 0;
	do
	{
		if (c == n)
		{
			std::cout << i << std::endl;
			j++;
			k = 0;
			i = j;
			c = 0;
		}
		else
		{
			if ((i < n) && (k == 0))
			{
				std::cout << i << ' ';
				i++;
			}
			else
			{
				if (i == n)
				{
					k = 1;
				}
				std::cout << i << ' ';
				i -= 1;
			}
		}
		c++;
		if (j > n)
		{
			break;
		}
	} while (c <= n);
	return EXIT_SUCCESS;
}