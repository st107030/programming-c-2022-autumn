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
			std::cout << "��� ";
			break;
		}
		case 2:
		{
			std::cout << "������ ";
			break;
		}
		case 3:
		{
			std::cout << "������ ";
			break;
		}
		case 4:
		{
			std::cout << "��������� ";
			break;
		}
		case 5:
		{
			std::cout << "������� ";
			break;
		}
		case 6:
		{
			std::cout << "�������� ";
			break;
		}
		case 7:
		{
			std::cout << "������� ";
			break;
		}
		case 8:
		{
			std::cout << "��������� ";
			break;
		}
		case 9:
		{
			std::cout << "��������� ";
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
			std::cout << "�������� ";
			break;
		}
		case 3:
		{
			std::cout << "�������� ";
			break;
		}
		case 4:
		{
			std::cout << "����� ";
			break;
		}
		case 5:
		{
			std::cout << "��������� ";
			break;
		}
		case 6:
		{
			std::cout << "���������� ";
			break;
		}
		case 7:
		{
			std::cout << "��������� ";
			break;
		}
		case 8:
		{
			std::cout << "����������� ";
			break;
		}
		case 9:
		{
			std::cout << "��������� ";
			break;
		}
		case 1:
		{
			switch (n % 10)
			{
			case 0:
			{
				std::cout << "������ �������";
				return EXIT_SUCCESS;
			}
			case 1:
			{
				std::cout << "����������� �������";
				return EXIT_SUCCESS;
			}
			case 2:
			{
				std::cout << "��������� �������";
				return EXIT_SUCCESS;
			}
			case 3:
			{
				std::cout << "���������� �������";
				return EXIT_SUCCESS;
			}
			case 4:
			{
				std::cout << "������������ �������";
				return EXIT_SUCCESS;
			}
			case 5:
			{
				std::cout << "���������� �������";
				return EXIT_SUCCESS;
			}
			case 6:
			{
				std::cout << "����������� �������";
				return EXIT_SUCCESS;
			}
			case 7:
			{
				std::cout << "���������� �������";
				return EXIT_SUCCESS;
			}
			case 8:
			{
				std::cout << "������������ �������";
				return EXIT_SUCCESS;
			}
			case 9:
			{
				std::cout << "����������� �������";
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
			std::cout << "�������";
			break;
		}
		case 1:
		{
			std::cout << "���� �����";
			break;
		}
		case 2:
		{
			std::cout << "��� ������";
			break;
		}
		case 3:
		{
			std::cout << "��� ������";
			break;
		}
		case 4:
		{
			std::cout << "������ ������";
			break;
		}
		case 5:
		{
			std::cout << "���� �������";
			break;
		}
		case 6:
		{
			std::cout << "����� �������";
			break;
		}
		case 7:
		{
			std::cout << "���� �������";
			break;
		}
		case 8:
		{
			std::cout << "������ �������";
			break;
		}
		case 9:
		{
			std::cout << "������ �������";
			break;
		}
		}
	if (n == 0)
	{
		std::cout << "���� �������";
	}
	return EXIT_SUCCESS;
}