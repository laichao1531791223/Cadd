#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

class Father
{
public:
	int a;
private:
	int b;
protected:
	int c;
};

class Son1 :public Father
{
public:
	void func()
	{
		a;
		//b;err
		c;
	}
	/*
	���м̳У�
	����Ĺ������Գ�Ա,�����໹�ǹ���
	�����˽�����Գ�Ա,�����໹��˽��
	����ı������Գ�Ա,�����໹�Ǳ���
	*/
};
void test01()
{
	Son1 s1;
	s1.a;
	//s1.b;err
	//s1.c;err
}

class Son2 :protected Father
{
public:
	void func()
	{
		a;
		//b;err
		c;
		/*
		�����̳�
		����Ĺ������Գ�Ա,�������Ϊ����
		�����˽�����Գ�Ա,�����໹��˽��
		����ı������Գ�Ա,�����໹��˽��
		*/
	}
};

void test02()
{
	Son2 s2;
	//s2.a;err
	//s2.b;err
	//s2.c;err
}

class Son3 :protected Father
{
public:
	void func()
	{
		a;
		//b;err
		c;
		/*
		˽�м̳�
		����Ĺ������Գ�Ա,�������Ϊ˽��
		�����˽�����Գ�Ա,�����໹��˽��
		����ı������Գ�Ա,�����໹�Ǳ���
		*/
	}
};

void test03()
{
	Son3 s3;
	//s3.a;err
	//s3.b;err
	//s3.c;err
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}