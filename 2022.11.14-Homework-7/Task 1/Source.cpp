#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0; //строки
	std::cin >> n;
	int m = 0; //столбцы
	std::cin >> m;
	//создание самого массива на нужное количество строк
	int** arr = (int**)malloc(n * sizeof(int*));
	//в каждой строке нужное кол-во столбцов
	for (int i = 0; i < n; ++i)
	{
		*(arr + i) = (int*)malloc(m * sizeof(int));
	}
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			sum += arr[i][j];
			if (j == m - 1)
			{
				std::cout << sum << ' ';
				sum = 0;
			}
		}
		if (i == n - 1)
		{
			std::cout << std::endl;
		}
	}
	sum = 0;
	for (int j = 0; j < m; ++j)
	{
		for (int i = 0; i < n; ++i)
		{
			sum += arr[i][j];
			if (i == n - 1)
			{
				std::cout << sum << ' ';
				sum = 0;
			}
		}
		if (j == m - 1)
		{
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
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
	//освобождение памяти
	for (int i = 0; i < n; ++i)
	{
		free (* (arr + i));
	}
	free(arr);
	return EXIT_SUCCESS;
}