#include <iostream>

int main(int argc, char* argv[])
{
    int m = 0;
    int n = 0;
    int a[100000]{ 0 };
    std::cin >> n;
    std::cin >> m;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> curr;
        if (a[curr] == 0)
        {
            a[curr] = 1;
        }
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> curr;
        if (a[curr] == 1)
        {
            a[curr] = 2;
        }
    }
    for (int i = 0; i < 100000; i++)
    {
        if (a[i] == 2)
        {
            std::cout << i << ' ';
        }
    }
    return EXIT_SUCCESS;
}