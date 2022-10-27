#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int money[100]{ 0 };
	int nalog[100]{ 0 }; //per cent
	for (int i = 0; i < n; i++)
	{
		std::cin >> money[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> nalog[i];
	}
	int max_num = 0;
	int max_sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (money[i] * nalog[i] > max_sum)
		{
			max_sum = money[i] * nalog[i];
			max_num = i + 1;
		}
	}
	std::cout << max_num;
	return EXIT_SUCCESS;
}