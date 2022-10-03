#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	switch (n / 100)
	{
		case 1:
		{
			std::cout << "sto ";
			break;
		}
		case 2:
		{
			std::cout << "dvesti ";
			break;
		}
		case 3:
		{
			std::cout << "trista ";
			break;
		}
		case 4:
		{
			std::cout << "chetyresta ";
			break;
		}
		case 5:
		{
			std::cout << "pyatsot ";
			break;
		}
		case 6:
		{
			std::cout << "shestsot ";
			break;
		}
		case 7:
		{
			std::cout << "semsot ";
			break;
		}
		case 8:
		{
			std::cout << "vosensot ";
			break;
		}
		case 9:
		{
			std::cout << "devyatsot ";
			break;
		}
	}
	switch (n / 10 % 10)
		{
		case 2:
		{
			std::cout << "dvadtsat' ";
			break;
		}
		case 3:
		{
			std::cout << "tridsat' ";
			break;
		}
		case 4:
		{
			std::cout << "sorok ";
			break;
		}
		case 5:
		{
			std::cout << "pyatdesyat ";
			break;
		}
		case 6:
		{
			std::cout << "shestdesyat ";
			break;
		}
		case 7:
		{
			std::cout << "semdesyat ";
			break;
		}
		case 8:
		{
			std::cout << "vosemdesyat ";
			break;
		}
		case 9:
		{
			std::cout << "devyanosto ";
			break;
		}
		case 1:
		{
			switch (n % 10)
			{
			case 0:
			{
				std::cout << "desyat bananov";
				return EXIT_SUCCESS;
			}
			case 1:
			{
				std::cout << "odinnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 2:
			{
				std::cout << "dvenadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 3:
			{
				std::cout << "trinadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 4:
			{
				std::cout << "chetyrnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 5:
			{
				std::cout << "pyatnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 6:
			{
				std::cout << "shestnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 7:
			{
				std::cout << "semnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 8:
			{
				std::cout << "vosemnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			case 9:
			{
				std::cout << "devyatnadtsat' bananov";
				return EXIT_SUCCESS;
			}
			}
		}
	}
	if ((n / 10 % 10 != 1) && (n != 0))
		switch (n % 10)
		{
		case 0:
		{
			std::cout << "bananov";
			break;
		}
		case 1:
		{
			std::cout << "odin banan";
			break;
		}
		case 2:
		{
			std::cout << "dva banana";
			break;
		}
		case 3:
		{
			std::cout << "tri banana";
			break;
		}
		case 4:
		{
			std::cout << "chetyre banana";
			break;
		}
		case 5:
		{
			std::cout << "pyat' bananov";
			break;
		}
		case 6:
		{
			std::cout << "shest' bananov";
			break;
		}
		case 7:
		{
			std::cout << "sem' bananov";
			break;
		}
		case 8:
		{
			std::cout << "vosem' bananov";
			break;
		}
		case 9:
		{
			std::cout << "devyat' bananov";
			break;
		}
		}
	if (n == 0)
	{
		std::cout << "nol' bananov";
	}
	return EXIT_SUCCESS;
}