#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

class Father
{
public:
	Father()
	{
		cout << "构造函数" << endl;
	}
	~Father()
	{
		cout << "析构函数" << endl;
	}
};

class Son :public Father
{
public:
	Son()
	{
		cout << "Son构造函数" << endl;
	}
	~Son()
	{
		cout << "析构函数" << endl;
	}
};

//先调用父类的构造函数，再调用本身的构造函数，析构函数调用顺序反之
void test01()
{
	Son s;
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}