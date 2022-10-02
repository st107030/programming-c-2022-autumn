#include <iostream>

int main(int args, char* argv[])
{
	int n = 0;
	std::cin >> n;
	switch (n / 100)
	{
		case 0: break;
		case 1:
		{
			std::cout << "Сто ";
			break;
		}
		case 2:
		{
			std::cout << "Двести ";
			break;
		}
		case 3:
		{
			std::cout << "Триста ";
			break;
		}
		case 4:
		{
			std::cout << "Четыреста ";
			break;
		}
		case 5:
		{
			std::cout << "Пятьсот ";
			break;
		}
		case 6:
		{
			std::cout << "Шестьсот ";
			break;
		}
		case 7:
		{
			std::cout << "Семьсот ";
			break;
		}
		case 8:
		{
			std::cout << "Восемьсот ";
			break;
		}
		case 9:
		{
			std::cout << "Девятьсот ";
			break;
		}
	}
	switch (n / 10 % 10)
		{
		case 0:
		{
			break;
		}
		case 2:
		{
			std::cout << "двадцать ";
			break;
		}
		case 3:
		{
			std::cout << "тридцать ";
			break;
		}
		case 4:
		{
			std::cout << "сорок ";
			break;
		}
		case 5:
		{
			std::cout << "пятьдесят ";
			break;
		}
		case 6:
		{
			std::cout << "шестьдесят ";
			break;
		}
		case 7:
		{
			std::cout << "семьдесят ";
			break;
		}
		case 8:
		{
			std::cout << "восемьдесят ";
			break;
		}
		case 9:
		{
			std::cout << "девяносто ";
			break;
		}
		case 1:
		{
			switch (n % 10)
			{
			case 0:
			{
				std::cout << "десять бананов";
				return EXIT_SUCCESS;
			}
			case 1:
			{
				std::cout << "одиннадцать бананов";
				return EXIT_SUCCESS;
			}
			case 2:
			{
				std::cout << "двенадать бананов";
				return EXIT_SUCCESS;
			}
			case 3:
			{
				std::cout << "тринадцать бананов";
				return EXIT_SUCCESS;
			}
			case 4:
			{
				std::cout << "четырнадцать бананов";
				return EXIT_SUCCESS;
			}
			case 5:
			{
				std::cout << "пятнадцать бананов";
				return EXIT_SUCCESS;
			}
			case 6:
			{
				std::cout << "шестнадцать бананов";
				return EXIT_SUCCESS;
			}
			case 7:
			{
				std::cout << "семнадцать бананов";
				return EXIT_SUCCESS;
			}
			case 8:
			{
				std::cout << "восемнадцать бананов";
				return EXIT_SUCCESS;
			}
			case 9:
			{
				std::cout << "девятнацать бананов";
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
			std::cout << "бананов";
			break;
		}
		case 1:
		{
			std::cout << "один банан";
			break;
		}
		case 2:
		{
			std::cout << "два банана";
			break;
		}
		case 3:
		{
			std::cout << "три банана";
			break;
		}
		case 4:
		{
			std::cout << "четыре банана";
			break;
		}
		case 5:
		{
			std::cout << "пять бананов";
			break;
		}
		case 6:
		{
			std::cout << "шесть бананов";
			break;
		}
		case 7:
		{
			std::cout << "семь бананов";
			break;
		}
		case 8:
		{
			std::cout << "восемь бананов";
			break;
		}
		case 9:
		{
			std::cout << "девять бананов";
			break;
		}
		}
	if (n == 0)
	{
		std::cout << "ноль бананов";
	}
	return EXIT_SUCCESS;
}