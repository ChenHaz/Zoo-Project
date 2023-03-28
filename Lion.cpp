#include "Lion.h"
Lion:: Lion() : Mammel()
{
	Type = 5;
	cout << "pleate enter volume of Lion's Roar" << endl;
	cin >> volumeOfRoar;
}
Lion:: Lion(Mammel a, int vor) : Mammel(a)
{
	Type = 5;
	this->volumeOfRoar = vor;
}
int Lion::getvolumeOR()
{
	return this->volumeOfRoar;
}
void Lion::setvolumeOR(int _vor)
{
	this->volumeOfRoar = _vor;
}
void Lion::makeNoise()
{
	cout << "Lion's noise is rrrrrrrrr" << endl;
}
void Lion::print()
{
	Mammel::print();
	cout << "thr lion volume of roar is :  " << this->volumeOfRoar << endl;
}
