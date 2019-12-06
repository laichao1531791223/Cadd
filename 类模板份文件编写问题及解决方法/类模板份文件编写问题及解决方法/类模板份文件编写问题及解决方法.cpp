#define _CRT_SECURE_NO_WARINGS
#include<iostream>
#include<string>
using namespace std;
#include"Maker.hpp"
/*
template<class NameType, class AgeType>
Maker<NameType, AgeType>::Maker(NameType name, AgeType age)
{
NameType str;

cout << "¹¹Ôìº¯Êý" << endl;
this->name = name;
this->age = age;
}

template<class NameType, class AgeType>
void Maker<NameType, AgeType>::printMaker()
{
cout << "Name:" << this->name << "Age:" << this->age << endl;
}
*/

int main()
{
	Maker<string, int> m("Îò¿Õ", 20);
	m.printMaker();

	system("pause");
	return EXIT_SUCCESS;
}