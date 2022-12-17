#include <iostream>
#include <cstring>

int max(int*, int, int);

int main(int argc, char* argv[])
{
	char st[1001];
	std::cin >> st;
	int len = strlen(st);
	int* s = (int*)malloc(sizeof(int) * len);

	for (int i = 0; i < len; ++i)
	{
		//подсмотрела в тыртырнетах, не помню, чтобы Вы объясняли, как конвертировать типы
		s[i] = st[i] - '0';
	}
	std::cout << max(s, 0, len - 1);
	free(s);
	return EXIT_SUCCESS;
}

int max(int* s, int maxx, int n)
{
	if (s[n] > maxx)
	{
		maxx = s[n];
	}
	if (n == 0)
	{
		return maxx;
	}
	return max(s, maxx, n - 1);
}