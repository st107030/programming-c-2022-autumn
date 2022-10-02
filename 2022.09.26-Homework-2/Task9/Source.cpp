#include <iostream>

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	//point (M, N)
	int x = 0;
	int y = 0;
	//1 <= x <=M <= 109  1<= y <= N <= 109
	std::cin >> M >> N;
	std::cin >> x >> y;
	//1st
	if (y - 1 >= 1)
	{
		std::cout << x << " " << y - 1 << std::endl;
	}
	//2nd
	if (y + 1 <= N)
	{
		std::cout << x << " " << y + 1 << std::endl;
	}
	//3rd
	if (x - 1 >= 1)
	{
		std::cout << x - 1 << " " << y << std::endl;
	}
	//4th
	if (x + 1 <= M)
	{
		std::cout << x + 1 << " " << y << std::endl;
	}
	return EXIT_SUCCESS;
}