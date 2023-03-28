#include "Horse.h"
Horse:: Horse() : Mammel()
{
	Type = 3;
	cout << "please enter speed of the horse" << endl;
	cin >> speed;
}
Horse:: Horse(Mammel a, double _speed) :Mammel(a)
{
	Type = 3;
	this->speed = _speed;
}
double Horse::getSpeed()
{
	return this->speed;
}
void Horse::setSpeed(double _speed)
{
	this->speed = _speed;
}
void Horse::makeNoise()
{
	cout << "Hores's noise is horsehorsehorse" << endl;
}
void Horse::print()
{
	Mammel::print();
	cout << "the horse speed is :  " << this->speed << endl;
}
