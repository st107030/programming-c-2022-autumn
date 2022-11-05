#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int arr[1000]{ 0 };
	int curr = 0;
	int i = 0;
	int j = 0;
	std::cin >> n >> a >> b >> c >> d;
	for (i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
	i = a - 1;
	j = b - 1;
	while (i < j)
	{
		curr = arr[i];
		arr[i] = arr[j];
		arr[j] = curr;
		i++;
		j -= 1;
	}
	i = c - 1;
	j = d - 1;
	while (i < j)
	{
		curr = arr[i];
		arr[i] = arr[j];
		arr[j] = curr;
		i++;
		j -= 1;
	}
	for (i = 0; i < n; i++)
	{
	std::cout << arr[i] << ' ';
	}
	return EXIT_SUCCESS;
}