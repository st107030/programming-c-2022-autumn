#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;

	int** arr = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; ++i)
	{
		*(arr + i) = (int*)malloc(n * sizeof(int));
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i < (n - j))
			{
				int temp = arr[i][j];
				arr[i][j] = arr[n - j - 1][n - i - 1];
				arr[n - j - 1][n - i - 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << arr[i][j] << ' ';
			if (j == n - 1)
			{
				std::cout << std::endl;
			}
		}
	}

	//освобождение памяти
	for (int i = 0; i < n; ++i)
	{
		free(*(arr + i));
	}
	free(arr);
	return EXIT_SUCCESS;
}