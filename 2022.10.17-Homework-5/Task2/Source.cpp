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
	int l = 0;
	int r = 0;
	std::cin >> l >> r;
	int max_el = 0;
	int num_max = 0;
	for (int i = l - 1; i < r; i++)
	{
		if (a[i] > max_el)
		{
			max_el = a[i];
			num_max = i + 1;
		}
	}
	std::cout << max_el << ' ' << num_max << std::endl;
	return EXIT_SUCCESS;
}