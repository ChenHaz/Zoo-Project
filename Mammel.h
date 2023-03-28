#pragma once
#include "Animal.h"
class Mammel :public Animal
{
private:
	bool isGotMilk;
public:
	Mammel();
	Mammel(Animal a, bool IGM);
	bool getIGM();
	void setIGM(bool igm);
	virtual void makeNoise();
	virtual void print();
};

