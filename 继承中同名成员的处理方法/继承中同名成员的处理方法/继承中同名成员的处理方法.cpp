#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

class Father
{
public:
	Father()
	{
		cout << "���캯��" << endl;
	}
	~Father()
	{
		cout << "��������" << endl;
	}
};

class Son :public Father
{
public:
	Son()
	{
		cout << "Son���캯��" << endl;
	}
	~Son()
	{
		cout << "��������" << endl;
	}
};

//�ȵ��ø���Ĺ��캯�����ٵ��ñ���Ĺ��캯����������������˳��֮
void test01()
{
	Son s;
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}