#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	//x**4+x**3+x**2+x+1 за 2 умножения
	int n;
	n = x * x;
	cout << (n + x) * (n + 1) + 1;
	return 0;
}