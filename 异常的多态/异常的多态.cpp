#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

//�쳣�Ļ���
class Father
{
public:
	virtual void printM()
	{

	}
};
//1.�м̳�
class SonNULL :public Father
{
public:
	virtual void printM()//2.��д������麯��
	{
		cout << "��ָ���쳣" << endl;
	}
};

class SonOut :public Father
{
public:
	virtual void printM()
	{
		cout << "Խλ���" << endl;
	}
};

void func(int a, int b)
{
	if (a == 0)
	{
		throw SonOut();
	}

	if (b == 0)
	{
		throw SonOut();
	}
}

void test()
{
	int a = 10;
	int b = 0;
	try
	{
		func(a, b);
	}
	catch (Father &f)//��������ָ���������
	{
		f.printM();
	}
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}