#pragma once
#include <string>

enum AnimalType
{
	None = 0,
	capybara = 1, 
	porcupine = 2, 
	tomtit = 3, 
	alabai = 4, 
	ramp = 5 
};

enum Habitat
{
	none = 0,
	land = 1,
	air = 2,
	water = 3
};

enum Status
{
	alive = 0,
	dead = 1
};

struct Animal
{
private:
	AnimalType type;
	int age;
	Habitat habitat;

public:
	std::string name;
	int power;
	Status status;

	Animal(std::string name = "Lu", AnimalType type = tomtit, int age = 1, int power = 2,\
		Habitat habitat = none, Status status = alive) :
		name(name),
		type(type),
		age(age),
		power(power),
		habitat(habitat),
		status(status) {}

	Animal(const Animal& an) :
		name(an.name),
		type(an.type),
		age(an.age),
		power(an.power),
		habitat(an.habitat),
		status(an.status) {}

	~Animal();

	void Settings(); //power, area & other stuff
	void printInfo(); //information about the animal
	void Mighter(int power);	//the animal becomes stronger
	AnimalType getType();	//prints type
	int getAge(); //prints age
	void setAge(int age); //age
	void elder(); //age + 1
	Habitat getHabitat();
};