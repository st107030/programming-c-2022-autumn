#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int a[100]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	int x = 0;
	std::cin >> x;
	int which = 1;
	while (a[which - 1] >= x)
	{
		which++;
	}
	std::cout << which;
	return EXIT_SUCCESS;
}