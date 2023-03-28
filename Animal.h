#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string Name;
	int Age;
protected:
	int Type;
public:
	Animal();
	Animal(string name, int age, int type);
	string getName();
	int getAge();
	int getType();
	void setName(string _name);
	void setAge(int _age);
	void setType(int _type);
	virtual void makeNoise();
	virtual void print();
};

