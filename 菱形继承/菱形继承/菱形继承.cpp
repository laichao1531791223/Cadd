#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

//爷爷
//被虚继承的基类叫虚基类
class Animal
{
public:
	Animal()
	{
		mA = 100;
	}
public:
	int mA;
};
//用虚继承的方法解决菱形继承中的二义性问题
//虚继承
class Sheep :virtual public Animal
{

};
class Camel :virtual public Animal
{

};

class SheepCamel :public Sheep, public Camel
{

};

void test()
{
	SheepCamel sc;
	cout << sc.mA << endl;
	
}

//通过指针访问成员变量
void test02()
{
	Sheep s;
	s.mA;

	//1.&s；
	//2.(int*)&s;强转为int*类型
	//3.*(int*)&s;//获取指针中的地址
	//4.(int *)*(int*)&s;//指向表的首地址
	//5.(int *)*(int*)&s+1;//指向了表存储偏移量的地址
	//6.*((int *)*(int*)&s+1)//这就是偏移量
	cout << *((int *)*(int*)&s + 1) << endl;

	//1.&s
	//2.(char*)&s;
	//3.(char*)&s+*((int *)*(int*)&s+1)
	//4.把类型转换为Animal指针类型
	cout << ((Animal*)((char*)&s + *((int *)*(int*)&s + 1)))->mA << endl;
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}