#include <iostream>

void Tower(int, int, int, int);
void Element(int, int, int);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	Tower(n, 1, 2, 3);
	return EXIT_SUCCESS;
}

void Tower(int n, int from, int to, int temp)
{
	if (n == 0)
	{
		return;
	}
	Tower(n - 1, from, temp, to);
	Element(n, from, to);
	Tower(n - 1, temp, to, from);
}

void Element(int num, int from, int to)
{
	std::cout << "Disk " << num << " move from " << from << " to " << to << std::endl;
}