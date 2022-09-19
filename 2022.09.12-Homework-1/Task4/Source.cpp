#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int v;
	int t;
	int n;
	cin >> v;
	cin >> t;
	n = v * t;
	int l;
	l = (abs(n) / 109) + 1;
		//המנמדא 109 ךל
	cout << ((109 * l + n) % 109);
}