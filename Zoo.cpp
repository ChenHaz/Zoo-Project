#include "Zoo.h"
Zoo::Zoo() 
{
	cout << "please enter the zoo's name" << endl;
	cin >> zooName;
	this->allanimals = nullptr;
	this->size = 0;
}
Zoo::~Zoo()
{
	if (this->allanimals == NULL) 
		return;
	else {
		for (int i = 0; i < this->size; i++)
			delete this->allanimals[i];
		delete[] this->allanimals;
	}
}
void Zoo::insertanimal()
{
	int choice;
	Animal** temp = new Animal * [this->size + 1];
	for (int i = 0; i < this->size; i++)
		temp[i] = this->allanimals[i];
	delete[] this->allanimals;
	this->allanimals = temp;
	this->size++;
	cout << "insert animal menu:" << endl;
	cout << "**************" << endl;
	cout << "0)Animal." << endl;
	cout << "1)Mammel." << endl;
	cout << "2)Owl." << endl;
	cout << "3)horse." << endl;
	cout << "4)cat." << endl;
	cout << "5)lion." << endl;
	cout << "6)bird." << endl;
	cout << "press the number of the animal's type" << endl;
	cin >> choice;
	switch (choice) {
	case(0):
		this->allanimals[this->size - 1] = new Animal;
		break;
	case(1):
		this->allanimals[this->size - 1] = new Mammel;
		break;
	case(2):
		this->allanimals[this->size - 1] = new Owl;
		break;
	case(3):
		this->allanimals[this->size - 1] = new Horse;
		break;
	case(4):
		this->allanimals[this->size - 1] = new Cat;
		break;
	case(5):
		this->allanimals[this->size - 1] = new Lion;
		break;
	case(6):
		this->allanimals[this->size - 1] = new Bird;
		break;
	default:
		cout << "incorrect number no insert GOODBYE";
		break;
	}
}
void Zoo::deleteanimal()
{
	int index;
	cout << "please enter an index" << endl;
	cin >> index;
	if (index > size || index < 0)
	{
		cout << "incorrect data GOODBYE!" << endl;
		return;
	}
	this->allanimals[index] = this->allanimals[size - 1];
	Animal** temp = new Animal * [this->size - 1];
	for (int i = 0; i < this->size-1; i++)
		temp[i] = this->allanimals[i];
	delete[] this->allanimals;
	this->allanimals = temp;
	this->size--;
}
void Zoo::printallanimal()
{
	cout << "**********************" << endl;
	cout << "ZOO NAME :" << this->zooName << endl;
	cout << "the animal in the zoo are : " << endl;
	for (int i = 0; i < this->size ; i++)
	{
		this->allanimals[i]->print();
		cout<<"\n";
	}
}
void Zoo::sortByName()
{
	Animal* temp = nullptr;
	for (int i = 0; i < this->size-1; i++)
	{
		for (int j = 0; j < this->size-1; j++)
		{
			if (allanimals[j]->getName() > allanimals[j+1]->getName())
			{
				temp = allanimals[j];
				allanimals[j] = allanimals[j + 1];
				allanimals[j + 1] = temp;
			}
		}
	}
	cout << "the zoo sorted by name!" << endl;
}
void Zoo::sortByAge()
{
	Animal* temp = nullptr;
	for (int i = 0; i < this->size-1; i++)
	{
		for (int j = 0; this->size - 1; j++)
		{
			if (allanimals[j]->getAge() > allanimals[j + 1]->getAge())
			{
				temp = allanimals[j];
				allanimals[j] = allanimals[j + 1];
				allanimals[j + 1] = temp;
			}
		}
	}
	cout << "the zoo sorted by age!" << endl;
}
void Zoo::findByName()
{
	string temp;
	cout << "enter name of animal that yu want find " << endl;
	cin >> temp;
	for (int i = 0; i < this->size; i++)
	{
		if (allanimals[i]->getName() == temp)
		{
			cout << "the animal you looking for found in index" << i << "of the list." << endl;
			return;
		}
	}
	cout << "there is no animal in the zoo with this name" << temp << endl;
}
void Zoo::menu()
{
	int choice;
	while (true)
	{
		cout << "Main menu:" << endl;
		cout << "***************" << endl;
		cout << "0)EXIT" << endl;
		cout << "1)insertAnimal" << endl;
		cout << "2)deleteAnimal" << endl;
		cout << "3)sortByName" << endl;
		cout << "4)sortByAge" << endl;
		cout << "5)findAnimalByName" << endl;
		cout << "6)printAllAnimal" << endl;
		cout << "YOUR CHOICE :" << endl;
		cin >> choice;
		switch (choice)
		{
		case(0):
			cout << "bye...." << endl;
			return;
		case(1):
			this->insertanimal();
			break;	
		case(2):
			this->deleteanimal();
			break;
		case(3):
			this->sortByName();
		case(4):
			this->sortByAge();
		case(5):
			this->findByName();
		case(6):
			this->printallanimal();
			break;
		}
	}
}
