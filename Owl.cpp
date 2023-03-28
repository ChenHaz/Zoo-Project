#include "Owl.h"
Owl:: Owl():Animal()
{
	Type = 2;
	cout << "please enter the Owl color " << endl;
	cin >> color;
}
Owl::Owl(Animal a, string _color) :Animal(a)
{
	Type = 2;
	this->color = _color;
}
string  Owl::getcolor()
{
	return this->color;
}
void  Owl::setcolor(string _color)
{
	this->color = _color;
}
void Owl:: makeNoise()
{
	cout << "Owl noise is owlowlowlowl" << endl;
}
void Owl::print()
{
	Animal::print();
	cout << "the owl color is :  " << this->color << endl;
}

