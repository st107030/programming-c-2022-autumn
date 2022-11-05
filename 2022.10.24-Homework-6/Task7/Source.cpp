#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int max_num = -101;
	int min_num = 101;
	int maxc = 0;
	int minc = 0;
	int sum = 0;
	int a[100]{ 0 };
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] > 0)
		{
			sum += a[i];
		}
		if (a[i] > max_num)
		{
			max_num = a[i];
			maxc = i;
		}
		if (a[i] < min_num)
		{
			min_num = a[i];
			minc = i;
		}
	}
	int ans = 1;
	for (int i = minc + 1; i < maxc; i++)
	{
		ans *= a[i];
	}
	std::cout << sum << ' ' << ans;
	return EXIT_SUCCESS;
}