#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;
#include<string>
template<class T>
void func(T a, T b)
{
	if (a > b)
	{
		cout << "a>b" << endl;
	}
	else
	{
		cout << "a<=b" << endl;
	}
}
void test()
{
	int arr[10];
	int arr2[20];

	func(arr, arr2);
}

class Maker
{
public:
	Maker(string name, int age)
	{
		this->age = age;
		this->name = name;
	}
public:
	string name;
	int age;
};
template<class T>
void myfunc(T &a, T &b)
{
	if (a > b)
	{
		cout << "a>b" << endl;
	}
	else
	{
		cout << "a<=b" << endl;
	}
}
//不建议具体化函数模板，因为没有通用性
//具体化函数模板,注意上面的函数模板要有才能具体化
template<>void myfunc<Maker>(Maker &a, Maker &b)
{
	cout << "函数模板的具体化" << endl;
	if (a.age > b.age)
	{
		cout << "a>b" << endl;
	}
	else
	{
		cout << "a<=b" << endl;
	}
}

void test02()
{
	Maker m1("aaa", 10);
	Maker m2("bbb", 20);

	myfunc(m1, m2);
}

int main()
{
	test02();
	test();//无法比较，不管怎么样都是a>b
	system("pause");
	return EXIT_SUCCESS;
}