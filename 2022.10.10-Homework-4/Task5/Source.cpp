#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	if (n > 30)
	{
		n = 30;
	}
	float sum = 1.0;
	float h = 1.0;
	for (int i = 1; i <= n; i++)
	{
		h = 1;
		for (int j = 1; j <= i; j++)
		{
			h *= j;
		}
		sum += (1 / h);
	}
	std::cout << sum;
	return EXIT_SUCCESS;
}