#include "Animal.h"
Animal::Animal() : Type(0)
{
	cout << "please enter a Name for the animal" << endl;
	cin >> Name;
	cout << "please enter a Age for the animal" << endl;
	cin >> Age;
}
Animal::Animal(string name, int age, int type)
{
	this->Name = name;
	this->Age = age;
	this->Type = 0;
}
string Animal::getName()
{
	return this->Name;
}
int Animal::getAge()
{
	return this->Age;
}
int Animal::getType()
{
	return this->Type;
}
void Animal::setName(string _name)
{
	this->Name = _name;
}
void Animal::setAge(int _age)
{
	this->Age = _age;
}
void Animal::setType(int _type)
{
	this->Type = _type;
}
void Animal::makeNoise()
{
	cout << "the animal noise is: regular animal noise " << endl;
}
void Animal::print()
{
	cout << "Animal name:  "  << this->Name << endl;
	cout << "Animal age:   "   << this->Age << endl;
}
