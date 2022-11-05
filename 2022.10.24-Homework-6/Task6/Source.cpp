#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100]{ 0 };
	int troiki[100]{ 0 };
	int chetv[100]{ 0 };
	int tr = 0;
	int ch = 0;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
		if (a[i] % 2 != 0)
		{
			troiki[tr] = a[i];
			tr++;
		}
		else
		{
			chetv[ch] = a[i];
			ch++;
		}
	}
	for (int i = 0; i < tr; i++)
	{
		if (i < tr - 1)
		{
			std::cout << troiki[i] << ' ';
		}
		else
		{
			std::cout << troiki[i] << std::endl;
		}
	}
	for (int i = 0; i < ch; i++)
	{
		if (i < ch - 1)
		{
			std::cout << chetv[i] << ' ';
		}
		else
		{
			std::cout << chetv[i] << std::endl;
		}
	}
	if (tr > ch)
	{
		std::cout << "NO";
	}
	else
	{
		std::cout << "YES";
	}
	return EXIT_SUCCESS;
}