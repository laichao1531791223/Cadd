#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal的构造" << endl;
	}

	/*virtual ~Animal()
	{
		cout << "Animal的析构" << endl;
	}*/

	//纯虚
	virtual ~Animal() = 0;
};

//在类外实现纯虚析构函数
Animal::~Animal()
{
	cout << "Animal的纯析构" << endl;
}

class Son :public Animal
{
public:
	Son()
	{
		cout << "Son的构造" << endl;
		pName = new char[64];
		memset(pName, 0, 64);
		strcpy(pName, "如花");
	}

	~Son()
	{
		cout << "Son的析构" << endl;
		if (pName != NULL)
		{
			delete[] pName;
			pName = NULL;
		}
	}
public:
	char *pName;
};

void test()
{
	Animal *animal = new Son;
	delete animal;
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}