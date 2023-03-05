#include <iostream>
#include <string>
#include "An.h"
#include <random>

// � ��� ������������
// � �� ���������, ��� ������� �������� �����, ������� ��� ����� ����� �������, �� � �� �������� � ����������� ���� ������ �����
// �������: ��� �� ���������� ���������(
// ���� ���� �������� �������� ���������� disease (������ / ������ �������)
// ������ ������ ������ �������, ����� "�������� �� ���������, � ������ � ���������� ������, ������ ��� ��������� ������" ���
// "���� ���� ��������� ���� (�������� ������ ����), �� � ��� power * 2, � ������ ��� ���������� ���� �����"
// ������ �� 10, � �� 100 ��������, �� ��� ������ ��� ����, ����� ���� ���-�� ������� �����

int main(int argc, char* argv[])
{

	Animal** animals = new Animal * [10];

	for (int i = 0; i < 10; ++i)
	{
		animals[i] = new Animal();
		animals[i]->Settings();
	}

	int i = 0;
	int counter = 10;
	while (counter > 1)
	{
		std::random_device rd;// �������� � ��������� �������
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dist(1, 3);
		int area = dist(gen);
		
		animals[i]->printInfo();
		std::cout << "VS" << std::endl;
		std::cout << std::endl;

		int j = i + 1;
		while ((animals[j]->status == dead) && (j < 9)) // ���� ������ ���������
		{
			++j;
		}
		animals[j]->printInfo();
		std::cout << "Area: " << ((area == 1) ? "land" : (area == 2) ? "air" : "water") << std::endl;
		std::cout << std::endl;

		if (((area == 1) && (animals[i]->getHabitat() == 3)) || ((area == 2) && (animals[i]->getHabitat() != 2))\
			|| ((area == 3) && (animals[i]->getHabitat() != 3))) // �� ���� �� � �������
		{
			if (animals[i]->status == alive)
			{
				animals[i]->status = dead;
				counter--;
			}
		}

		if (((area == 1) && (animals[j]->getHabitat() == 3)) || ((area == 2) && (animals[j]->getHabitat() != 2))\
			|| ((area == 3) && (animals[j]->getHabitat() != 3))) //�� ���� �� ������ � ���� �������
		{
			if (animals[j]->status == alive)
			{
				animals[j]->status = dead;
				counter--;
			}
		}

		if ((i < 10 - 1) && (animals[i]-> status == alive) && (animals[i + 1] -> status == alive)) // ���� ��� ����, �� "���"
		{
			if (animals[i]->power > animals[i + 1]->power)
			{
				animals[i + 1]->status = dead;
				counter--;
				animals[i]->power += animals[i + 1]->power;
			}
			if (animals[i]->power == animals[i + 1]->power)
			{
				animals[i]->status = dead;
				animals[i + 1]->status = dead;
				counter -= 2;
			}
		}

		for (int k = 0; k < 10; ++k)// ����� ����� �������� ���, ���-�� ������� �� ��������
		{
			animals[k]->elder();
			if (animals[k]->status == alive) {
				switch (animals[k]->getType())
				{
					case 1:
					{
						if (animals[k]->getAge() > 10)
						{
							animals[k]->status = dead;
							counter--;
						}
					}
					case 2:
					{
						if (animals[k]->getAge() > 12)
						{
							animals[k]->status = dead;
							counter--;
						}
					}
					case 3:
					{
						if (animals[k]->getAge() > 15)
						{
							animals[k]->status = dead;
							counter--;
						}
					}
					case 4:
					{
						if (animals[k]->getAge() > 14)
						{
							animals[k]->status = dead;
							counter--;
						}
					}
					case 5:
					{
						if (animals[k]->getAge() > 11)
						{
							animals[k]->status = dead;
							counter--;
						}
					}
				}
			}
		}
		if (i == 8)
		{
			i = 0;
		}
		else 
		{
			i++;
			while ((animals[i]->status == dead) && (i < 8))
			{
				i++;
			}
		}
	}
	if (counter == 0)
	{
		std::cout << "Everyone is dead :(";
	}
	else
	{
		for (int i = 0; i < 10; ++i)
		{
			if (animals[i]->status == alive)
			{
				std::cout << "---WINNER---" << std::endl;
				animals[i]->printInfo();
			}
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		delete animals[i];
	}
	delete[] animals;
	return EXIT_SUCCESS;
}