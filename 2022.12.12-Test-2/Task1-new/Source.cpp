#include <iostream>

void Spiralka(int**, int, int, int, int, int, int);

int main(int argc, char argv[])
{
	int n = 0;
	std::cin >> n;
	
	int** sp = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; ++i)
	{
		sp[i] = (int*)malloc(sizeof(int) * n);
	}

	int k = 0; //0 - right, 1 - down, 2 - left, 3 - up
	int curr = 1;
	int i = 0;
	int j = 0;
	Spiralka(sp, curr, i, j, n, k, 0);
	
	curr = n * n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (sp[i][j] < (-1) * n * n || sp[i][j] > n * n)
			{
				sp[i][j] = n * n;
			}
			std::cout << sp[i][j] << ' ';
			if (j == n - 1)
			{
			std::cout << std::endl;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		free(sp[i]);
	}
	free(sp);
}


void Spiralka(int** sp, int curr, int i, int j, int n, int k, int z)
{
	if (curr >= n * n)
	{
		return;
	}
	sp[i][j] = curr;
	//std::cout << sp[i][j] << ' ';
	if ((j < n - 1 - z) && (k == 0))
	{
		return(Spiralka(sp, curr + 1, i, j + 1, n, k, z)); //пока не последний столбец или не столбец, где что-то уже записано - вправо
	}

	if ((j == n - 1 - z) && (k == 0))
	{
		k = 1;
		return(Spiralka(sp, curr + 1, i + 1, j, n, k, z)); //поворот
	}

	if ((i < n - 1 - z) && (k == 1))
	{
		return(Spiralka(sp, curr + 1, i + 1, j, n, k, z)); //аналогично идём вниз
	}

	if ((i == n - 1 - z) && (k == 1))
	{
		k = 2;
		return(Spiralka(sp, curr + 1, i, j - 1, n, k, z)); //поворот
	}

	if ((j > 0 + z) && (k == 2))
	{
		return(Spiralka(sp, curr + 1, i, j - 1, n, k, z)); //идём влево
	}

	if ((j == 0 + z) && (k == 2))
	{
		k = 3;
		return(Spiralka(sp, curr + 1, i - 1, j, n, k, z + 1)); //поворот, вверх идти уже на один шаг меньше
	}

	if ((i > 0 + z) && (k == 3))
	{
		return(Spiralka(sp, curr + 1, i - 1, j, n, k, z)); //идём вверх
	}

	if ((i == 0 + z) && (k == 3))
	{
		k = 0;
		return(Spiralka(sp, curr + 1, i, j + 1, n, k, z)); //пройден круг
	}
}