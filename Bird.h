#pragma once
#include "Owl.h"
class Bird :public Owl
{
private:
	int hight;
public :
	Bird();
	Bird(Owl a, int _hight);
	int gethight();
	void sethight(int _high);
	void makeNoise();
	void print();
};

