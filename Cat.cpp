#include "Cat.h"
Cat:: Cat() : Mammel()
{
	Type = 4;
	cout << "please enter cat's num of souls" << endl;
	cin >> numOfSouls;
}
Cat:: Cat(Mammel a, int nos) :Mammel(a)
{
	Type = 4;
	this->numOfSouls = nos;
}
int Cat::getNumOfSouls()
{
	return this->numOfSouls;
}
void Cat::setNumOfSouls(int _souls)
{
	this->numOfSouls = _souls;
}
void Cat::makeNoise()
{
	cout << "cat's noise id miaoooooo" << endl;
}
void Cat::print()
{
	Mammel::print();
	cout << "the cat num of souls is :  " << this->numOfSouls << endl;
}