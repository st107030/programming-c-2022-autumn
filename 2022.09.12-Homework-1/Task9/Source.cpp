#include <iostream>
int main(int argc, char* argv[])
{
	int x = 0;
	std::cin >> x;
	//x**4+x**3+x**2+x+1 за 2 умножения
	int n = 0;
	n = x * x;
	std::cout << (n + x) * (n + 1) + 1;
	return EXIT_SUCCESS;
}