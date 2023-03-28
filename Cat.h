#pragma once
#include "Mammel.h"
class Cat :public Mammel
{
private:
	int numOfSouls;
public:
	Cat();
	Cat(Mammel a, int nos);
	int getNumOfSouls();
	void setNumOfSouls(int _souls);
	void makeNoise();
	void print();
};

