#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ���" << endl;
	}

	/*virtual ~Animal()
	{
		cout << "Animal������" << endl;
	}*/

	//����
	virtual ~Animal() = 0;
};

//������ʵ�ִ�����������
Animal::~Animal()
{
	cout << "Animal�Ĵ�����" << endl;
}

class Son :public Animal
{
public:
	Son()
	{
		cout << "Son�Ĺ���" << endl;
		pName = new char[64];
		memset(pName, 0, 64);
		strcpy(pName, "�绨");
	}

	~Son()
	{
		cout << "Son������" << endl;
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