#include <iostream>

//sort points

struct Point {
	int x;
	int y;

	Point(int x = 0, int y = 0) : x(x), y(y) {} //create

	Point (const Point& m) : //copy
		x (m.x),
		y (m.y) {}

	~Point(){}; //destr

	double Distance() 
	{
		return(sqrt(x * x + y * y));
	}

	void PrPoint()
	{
		std::cout << x << ' ' << y << std::endl;
	}
};

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << std::endl;

	Point* a = (Point*)malloc(n * sizeof(Point));

	for (int i = 0; i < n; ++i) //input
	{
		Point point;
		std::cin >> point.x >> point.y;
		a[i] = point;
	}

	for (int i = 0; i < n; ++i) //sort
	{
		for (int j = n - 1; j > i; --j)
		{
			if (a[j - 1].Distance() > a[j].Distance())
			{
				Point temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; ++i) //output
	{
		a[i].PrPoint();
	}
	free(a);
	return EXIT_SUCCESS;
}