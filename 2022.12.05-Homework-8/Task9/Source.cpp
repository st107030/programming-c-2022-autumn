#include <iostream>

void Del(std::string, int, int);

int main(int argc, char* argv[])
{
	std::string st = "";
	std::cin >> st;
	Del(st, 0, st.length() - 1);
	return EXIT_SUCCESS;
}

void Del(std::string s, int start, int finish)
{
	if (start < finish)
	{
		if (s[start] != s[finish])
		{
			std::cout << s[start];
		}
		Del(s, start + 1, finish - 1);
		if (s[start] != s[finish])
		{
			std::cout << s[finish];
		}
	}
	if (start == finish)
	{
		std::cout << s[start];
	}
}