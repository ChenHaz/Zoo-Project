#include "Bird.h"
Bird:: Bird() : Owl()
{
	Type = 6;
	cout << "please enter the high of the bird" << endl;
	cin >> this->hight;
}
Bird::Bird(Owl a, int _hight) :Owl(a)
{
	Type = 6;
	this->hight = _hight;
}
int Bird::gethight()
{
	return this->hight;
}
void Bird::sethight(int _high)
{
	this->hight = _high;
}
void Bird::makeNoise()
{
	cout << "the bird's noise is hahahahhahahah" << endl;
}
void Bird::print()
{
	Owl::print();
	cout << "the bird high is :   " << this->hight << endl;
}
