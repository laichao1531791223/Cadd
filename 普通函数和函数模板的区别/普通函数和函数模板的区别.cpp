#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

//��ͨ����
int myPlus(int a, int b)
{
	return a + b;
}

template<class T>
int myPlus2(T a, T b)
{
	return a + b;
}

void test()
{
	int a = 10;
	int b = 20;
	char c = 'a';
	//��ͨ�������Խ�����ʽת��
	myPlus(a, c);
	//����ģ�岻��ֱ�ӵĽ�����ʽת��
	//myPlus2(a, c);
	myPlus2<int>(a, c);//���Ҫ������ʽת����������ϲ����б�
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}