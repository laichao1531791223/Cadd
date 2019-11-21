#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

class Father
{
public:
	static void func()
	{
		cout << "func()" << endl;
	}
	static void func(int a)
	{
		cout << "Father func(int a)" << endl;
	}
	static void func(int a, int b)
	{
		cout << "Father func(int a,int b)" << endl;
	}
public:
	static int mA;
};

int Father::mA = 10;

class Son :public Father
{
public:
	/*static void func()
	{
		cout << "Son func()" << endl;
	}*/
	/*static int func()
	{
		cout << "int func" << endl;
		return 0;
	}*/
public:
	static int mA;
};

int Son::mA = 20;

void test01()
{
	Son s;
	cout << s.mA << endl;
	s.Father::mA = 200;
	cout << Father::mA << endl;
	cout << &(s.Father::mA) << endl;
	cout << &(Father::mA) << endl;
	s.func();
	s.func(10);
	s.func(10, 20);
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}