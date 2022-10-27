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
	int x = 0;
	int min_r = 10000;
	int ans = -1;
	std::cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (((x - a[i] <= min_r) && (x - a[i] >= 0)) || ((a[i] - x <= min_r) && (x - a[i] <= 0)))
		{
			if ((x - a[i] == min_r) || (a[i] - x == min_r))
			{
				if (a[i] < ans)
				{
					ans = a[i];
				}
			}
			else
			{
				(x - a[i] >= 0) ? min_r = x - a[i] : min_r = a[i] - x;
				ans = a[i];
			}
		}
	}
	std::cout << ans;
	return EXIT_SUCCESS;
}