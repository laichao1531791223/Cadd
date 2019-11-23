#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;
#include<string>
template<class NameType,class AgeType>
class Maker
{
public:
	Maker(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void printMaker()
	{
		cout << "Name:" << this->name << "Age:" << this->age << endl;
	}
public:
	NameType name;
	AgeType age;
};

void test()
{
	//1.��ģ�岻���Զ��Ƶ��������ͣ�Ҫ��ʾ�ĸ��߱�������ʲô����
	Maker<string, int> m("���",18);
	m.printMaker();

	//2.ע�⴫��Ĳ���,�����������Ҫ����Ա�Լ�����
	Maker<int, int> m2(18, 20);
	m2.printMaker();

	//Maker<> m3("aaa",18);err,����ͨ�������б���߱�������ʲô����
}

//��ģ���Ĭ������
template<class NameType, class AgeType = int>
class Maker2
{
public:
	Maker2(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void printMaker()
	{
		cout << "Name:" << this->name << "Age:" << this->age << endl;
	}
public:
	NameType name;
	AgeType age;
};

void test02()
{
	//�����Ĭ�����ͣ���ô<>�������д����
	Maker2<string> m("������", 20);

	m.printMaker();
	//�Դ��������Ϊ׼<double>
	Maker2<string, double>m2("wukon", 20.22);
	m.printMaker();
}
//Ĭ�����ͺ���ķ������Ͷ�������Ĭ������
template<class NameType, class AgeType = int, class T = int>
class Maker3
{
public:
	Maker3(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void printMaker()
	{
		cout << "Name:" << this->name << "Age:" << this->age << endl;
	}
public:
	NameType name;
	AgeType age;
};

int main()
{
	test02();
	system("pause");
	return EXIT_SUCCESS;
}