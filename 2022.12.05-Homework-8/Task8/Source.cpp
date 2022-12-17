#include <iostream>

void skob(std::string, int, int);

int main(int argc, char* argv[]) 
{
	std::string st = ""; //надеюсь, так можно...
	std::cin >> st;
	std::cout << '(';
	skob(st, st.length() - 1, 0);
	std::cout << ')';
	return EXIT_SUCCESS;
}

void skob(std::string s, int len, int curr) 
{
	if (len - curr <= 1) 
	{
		std::cout << s[curr];
		if (curr != len)
		{
			std::cout << s[len];
		}
	}
	else 
	{
		std::cout << s[curr] << "(";
		skob(s, len - 1, curr + 1);
		std::cout << ")" << s[len];
	}
}