#include <iostream>
using namespace std;
int main()
{
	int a, b, c, a1, b1, c1;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> a1;
	cin >> b1;
	cin >> c1;
	cout << (a1 - a) * 3600 + (b1 - b) * 60 + (c1 - c);
	return 0;
}