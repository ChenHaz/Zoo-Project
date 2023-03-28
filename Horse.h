#pragma once
#include "Mammel.h"
class Horse :public Mammel
{
private:
	double speed;
public :
	Horse();
	Horse(Mammel a, double _speed);
	double getSpeed();
	void setSpeed(double _speed);
	void makeNoise();
	void print();

};

