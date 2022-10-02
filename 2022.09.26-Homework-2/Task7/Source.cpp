#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int k = 0;
	//n*m chocolate bar, k is an amount of pieces is needed to be breaken off
	std::cin >> n;
	std::cin >> m;
	std::cin >> k;
	if (k > m * n)
	{
		std::cout << "NO";
	}
	else
	{
		if ((k % n == 0) || (k % m == 0))
		{
			std::cout << "YES";
		}
		else
		{
			std::cout << "NO";
		}
	}
}