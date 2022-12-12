#include <iostream>

int Mag(int, int, int, int*, int*, int*);

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int k = 0;
	std::cin >> k;
    int counter = 0;
    int* adr = &counter;
	int* xb = (int*)malloc(sizeof(int) * k);
	int* yb = (int*)malloc(sizeof(int) * k);
    for (int i = 0; i < k; ++i)
    {
        xb[i] = 0;
        yb[i] = 0;
    }

    counter =  Mag(0, n, k, xb, yb, adr);
    std::cout << counter;

	free(xb);
	free(yb);
	return EXIT_SUCCESS;
}


int Mag(int num, int n, int k, int* xb, int* yb, int* ans) 
{
    bool strike;
    for (int y = (num ? num + 1: 1); y <= n; y++)
        for (int x = 1; x <= n; x++) 
        {
            strike = true;
            for (int i = 0; i < num; i++) 
            {
                int dist1 = (yb[i] - y > 0 ? yb[i] - y: y - yb[i]);
                int dist2 = (xb[i] - x > 0 ? xb[i] - x : x - xb[i]);
                if ((dist1 == 0) || (dist2 == 0) || (dist1 == dist2) || (dist1 * dist2 == 2))
                //1 усл: не тот ли столбец; 2: не та ли строка; 3: не та ли диагональ; 4: не бьёт ли как конь
                {
                    strike = false; 
                    break;
                }
            }
            if ((strike == true) && (num < k - 1)) 
            {
                xb[num] = x;      //ставим магараджу, поле свободное
                yb[num] = y;
                std::cout << xb[num] << ' ' << yb[num] << ' ' << *ans << std::endl;
                Mag(num + 1, n, k, xb, yb, ans);
            }
            else
            {
                if (num == k - 1)
                {
                    ++*ans;
                }

            }
        }
    return *ans;
}