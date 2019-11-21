#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;
//抽象层
class rule
{
public:
	//纯虚函数
	virtual int getnum(int a, int b) = 0;
};

//实现层
class plus_rule :public rule
{
public:
	virtual int getnum(int a, int b)//重写父类的虚函数，依赖抽象层
	{
		return a + b;
	}
};
//扩展新功能
class miux_rule :public rule
{
public:
	virtual int getnum(int a, int b)
	{
		return a - b;
	}
};

//业务层
int doLogin(rule *cal)
{
	int a = 10;
	int b = 20;
	

	int ret = cal->getnum(a, b);//依赖抽象层

	return ret;
}

void test()
{
	rule *r = NULL;
	r = new plus_rule;
	cout << doLogin(r) << endl;
	delete r;
	//增加的代码
	r = new miux_rule;
	cout << doLogin(r) << endl;
	delete r;
}

void test02()
{
	//抽象类不能实例化对象
	//rule r;
}

class Maker
{
public:
	virtual void func1() = 0;
	virtual void func2() = 0;
};

class Son :public Maker
{
	virtual void func1()
	{

	}
	virtual void func2()
	{

	}
};

void test03()
{
	Son s;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}