#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int counter = 0;
	if (n == 1)
	{
		counter = 1;
	}
	else
	{
		counter = 2;
	}
	for (int i = 2; i < n; i++)
	{
		if ((n % i == 0) && (n / i >= i))
		{
			if (n / i > i)
			{
				counter += 2;
			}
			if (n / i == i)
			{
				counter++;
				break;
			}
		}
		else
		{
			if (n / i < i)
			{
				break;
			}
		}
	}
	std::cout << counter;
	return EXIT_SUCCESS;
}