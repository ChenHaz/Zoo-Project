#pragma once
#include"Bird.h"
#include "Cat.h"
#include "Horse.h"
#include "Lion.h"
class Zoo
{
private :
	Animal** allanimals;
	int size;
	string zooName;
public:
	Zoo();
	~Zoo();
	void insertanimal();
	void deleteanimal();
	void printallanimal();
	void sortByName();
	void sortByAge();
	void findByName();
	void menu();
};

