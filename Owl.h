#pragma once
#include "Animal.h"
class Owl : public Animal
{
private:
	string color;
public :
	Owl();
	Owl(Animal a, string _color);
	string getcolor();
	void setcolor(string _color);
	virtual void makeNoise();
	virtual void print();
};

