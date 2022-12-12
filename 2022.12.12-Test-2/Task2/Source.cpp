#include <iostream>

void Reverse(int*, int, int);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* ch = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> ch[i];
	}
	Reverse(ch, 0, n - 1) ;
	free(ch);
	return EXIT_SUCCESS;
}

void Reverse(int* ch, int num, int n)
{
	if (num != n)
	{
		Reverse(ch, num + 1, n);
	}
	std::cout << ch[num] << ' ';
}