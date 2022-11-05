#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100]{ 0 };
	int max_num = -10;
	int maxc = 0;
	int sum = 0;
	int st = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] >= max_num)
		{
			max_num = a[i];
			maxc = i;
		}
	}
	sum += (maxc + 1) * max_num;
	while (maxc != n - 1)
	{
		max_num = -10;
		st = maxc;
		for (int i = st + 1; i < n; i++)
		{
			if (a[i] >= max_num)
			{
				max_num = a[i];
				maxc = i;
			}
		}
		sum += (maxc - st) * max_num;
	}
	std::cout << sum;
	return EXIT_SUCCESS;
}