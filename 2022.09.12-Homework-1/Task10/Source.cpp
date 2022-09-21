#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	std::cin >> a;
	std::cin >> b;
	int min = 0;
	min = ((a + b) - sqrt((a - b) * (a - b))) / 2;
	std::cout << a + b - min;
	return EXIT_SUCCESS;
}