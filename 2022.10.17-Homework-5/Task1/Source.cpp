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
	int counter = 0;
	std::cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			counter++;
		}
	}
	std::cout << counter;
	return EXIT_SUCCESS;
}