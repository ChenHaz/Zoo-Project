#include "Mammel.h"
Mammel::Mammel() : Animal()
{
	int flag = 0;
	Type = 1;
	string eat;
		 flag = 0;
		 do {
			 cout << "the Mammel got milk ? yes/no" << endl;
			 try
			 {
				 cin >> eat;
				 if (eat != "no" && eat != "yes")
					 throw "WRONG! - incorrect answer";
				 else {
					 flag = 0;
					 if (eat == "yes" || eat == "YES" || eat == "Yes")
						 this->isGotMilk = true;
					 else if (eat == "no" || eat == "NO" || eat == "No")
						 this->isGotMilk = false;
				 }
			 }
			 catch (const char* a)
			 {
				 cout << a << endl;
				 flag = 1;
			 }
		 } while (flag == 1);
}
Mammel:: Mammel(Animal a, bool IGM) :Animal(a)
{
	Type = 1;
	this->isGotMilk = IGM;

}
bool Mammel::getIGM()
{
	return this->isGotMilk;
}
void Mammel::setIGM(bool igm)
{
	this->isGotMilk = igm;
}
void Mammel::makeNoise()
{
	cout << "Mammel noise is: mamamamamama" << endl;
}
void Mammel::print()
{
	Animal::print();
	cout <<boolalpha<< "the Mammel is got milk ?   " << this->isGotMilk << endl;
}
