#include <iostream>

int main(int args, char* argv[])
{
	int c = 1;
	int counter = 0;
	while (c != 0)
	{
		std::cin >> c;
		if ((c < 0) && (c % 2 != 0))
		{
			counter++;
		}
	}
	std::cout << counter;
}