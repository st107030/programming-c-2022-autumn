#include <iostream>
#include <cstring>

char* zv(char*, int, int);

int main(int argc, char* argv[])
{
	char st[2001]{ '0' };
	std::cin >> st;
	int len = strlen(st);
	std::cout << zv(st, 0, len);
	return EXIT_SUCCESS;
}

char* zv(char* s, int curr, int n)
{
	if (curr == n - 1)
	{
		return s;
	}
	char temp = s[curr + 1];
	s[curr + 1] = '*';
	for (int i = curr + 2; i < n + 1; ++i)
	{
		char g = s[i];
		s[i] = temp;
		temp = g;
	}
	return zv(s, curr + 2, n + 1);
}