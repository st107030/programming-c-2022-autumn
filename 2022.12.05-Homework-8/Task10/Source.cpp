#include <iostream>

int adm(int*&, int, int);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* forum = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> forum[i];
		std::cin >> forum[i];
	}
	int k = 0;
	std::cin >> k;
	std::cout << adm(forum, k - 1, n);
	free(forum);
	return EXIT_SUCCESS;
}

int adm(int*& arr, int k, int n)
{
	int counter = 1;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == k + 1)
		{
			counter += adm(arr, i, n);
		}
	}
	return counter;
}