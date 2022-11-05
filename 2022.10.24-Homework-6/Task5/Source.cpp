#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100000]{ 0 };
	int min_num = 57748383;
	int minc = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] < min_num)
		{
			min_num = a[i];
			minc = i;
		}
	}
	for (int i = minc; i < n; i++)
	{
		std::cout << a[i] << ' ';
	}
	for (int i = 0; i < minc; i++)
	{
		std::cout << a[i] << ' ';
	}
	return EXIT_SUCCESS;
}