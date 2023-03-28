#pragma once
#include "Mammel.h"
class Lion : public Mammel
{
private:
	int volumeOfRoar;
public:
	Lion();
	Lion(Mammel a, int vor);
	int getvolumeOR();
	void setvolumeOR(int _vor);
	void makeNoise();
	void print();

};

