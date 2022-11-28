#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int m = 0;
	std::cin >> m;

	int** arr = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; ++i)
	{
		*(arr + i) = (int*)malloc(m * sizeof(int));
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> arr[i][j];
		}
	}

	int k = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> k;
			arr[i][j] += k;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << arr[i][j] << ' ';
			if (j == m - 1)
			{
				std::cout << std::endl;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		free(*(arr + i));
	}
	free(arr);
	return EXIT_SUCCESS;
}