#include <iostream>
#include <string>

struct Animal
{
	std::string type;
	std::string name;
	int age;

	Animal(std::string type = "capybara", std::string name = "Capy", int age = 3)
	{
		this->type = type;
		this->name = name;
		this->age = age;
	}

	Animal(const Animal& creature)
	{
		this->type = creature.type;
		this->name = creature.name;
		this->age = creature.age;
	}

	~Animal()
	{
	}
};

void printAnimal(Animal an)
{
	std::cout << "It\'s name is " << an.name << '.' << std::endl;
	std::cout << an.name << " is " << an.type << '.' << std::endl;
	std::cout << "It is " << an.age << " years old." << std::endl;
}

void ElderAnimal(Animal& an)
{
	an.age += 1;
}

int main(int argc, char* argv[])
{
	Animal Check;
	ElderAnimal(Check);
	printAnimal(Check);
	return EXIT_SUCCESS;
}