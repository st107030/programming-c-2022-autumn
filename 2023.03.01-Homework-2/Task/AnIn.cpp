#include <iostream>
#include <random>
#include "An.h"

Animal::~Animal()
{
}

AnimalType Animal::getType()
{
	return type;
}

void Animal::Settings()
{
	std::string names[37]{ "Biba", "Urman", "Bingo", "Baksy", "El", "Hilton", "George", "Lotte", "Erix", "Lizabeth",\
	"Prince", "Paul", "Ashley", "Carbon", "Bonny", "Ed", "Alan", "Herc", "Boba", "Clank", "Laurel", "Stan", "Pusheen",\
	"Banana", "Pomski", "Po", "Bill", "Tartu", "Capy", "Levi", "Lu", "Ryan", "Tim", "Lin", "Tusya", "Nihil", "Tess" };
	std::random_device rd;
	std::mt19937 gen(rd());  
	std::uniform_int_distribution<> dist(1, 100000000); 

	type = AnimalType(dist(gen) % 5 + 1);
	age = dist(gen) % 9 + 1;
	power = dist(gen) % 5;
	name = names[dist(gen) % 37];

	switch (type)
	{
	case tomtit:
	{
		habitat = air;
		break;
	}
	case ramp:
	{
		habitat = water;
		break;
	}
	default:
	{
		habitat = land;
	}
	}
}

void Animal::printInfo()
{
	std::cout << "Name: " << name << std::endl;
	switch (type) //type -> area
	{
		case 0: 
		{
			std::cout << "Type: none" << std::endl;
			std::cout << "Area: none" << std::endl;
			break;
		}
		case 1: 
		{
			std::cout << "Type: capybara" << std::endl;
			std::cout << "Area: land" << std::endl;
			break;
		}
		case 2: 
		{
			std::cout << "Type: porcupine" << std::endl;
			std::cout << "Area: land" << std::endl; 
			break;
		}
		case 3: 
		{
			std::cout << "Type: tomtit" << std::endl;
			std::cout << "Area: air" << std::endl; 
			break;
		}
		case 4: 
		{
			std::cout << "Type: alabai" << std::endl;
			std::cout << "Area: land" << std::endl; 
			break;
		}
		case 5: 
		{
			std::cout << "Type: ramp" << std::endl;
			std::cout << "Area: water" << std::endl;
			break;
		}
	}
	std::cout << "Age: " << age << std::endl;
	std::cout << "Power: " << power << std::endl;
	std::cout << "Status: " << ((status == alive) ? "alive" : "dead") << std::endl;
	std::cout << std::endl;
}

void Animal::Mighter(int Power)
{
	power += Power;
}

int Animal::getAge()
{
	return age;
}

void Animal::setAge(int Age)
{
	if (Age > 0)
	{
		age = Age;
	}
}

void Animal::elder()
{
	age++;
}

Habitat Animal::getHabitat()
{
	return(habitat); 
}