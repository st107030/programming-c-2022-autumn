#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int m = 0;
	std::cin >> m;
	sum - 9;
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

	for (int j = 0; j < m; ++j)
	{
		for (int i = 0; i < (n / 2); ++i)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[n - i - 1][j];
			arr[n - i - 1][j] = temp;
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