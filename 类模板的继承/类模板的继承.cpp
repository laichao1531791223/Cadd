#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;
#include<string>

//��ͨ��̳���ģ��
template<class T>
class Father
{
public:
	Father()
	{
		m = 20;
	}
public:
	T m;
};

//��ͨ�� �̳� ��ģ��
class Son :public Father<int>//Ҫ���߱���������ķ����������;�����ʲô����
{
public:
};

//��ģ�� �̳� ��ģ��
template<class T1,class T2>
class Son2 :public Father<T2>
{

};

void test()
{
	Son2<int, string> s;
	cout << s.m << endl;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}