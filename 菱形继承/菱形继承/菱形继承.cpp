#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

//үү
//����̳еĻ���������
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
//����̳еķ���������μ̳��еĶ���������
//��̳�
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

//ͨ��ָ����ʳ�Ա����
void test02()
{
	Sheep s;
	s.mA;

	//1.&s��
	//2.(int*)&s;ǿתΪint*����
	//3.*(int*)&s;//��ȡָ���еĵ�ַ
	//4.(int *)*(int*)&s;//ָ�����׵�ַ
	//5.(int *)*(int*)&s+1;//ָ���˱�洢ƫ�����ĵ�ַ
	//6.*((int *)*(int*)&s+1)//�����ƫ����
	cout << *((int *)*(int*)&s + 1) << endl;

	//1.&s
	//2.(char*)&s;
	//3.(char*)&s+*((int *)*(int*)&s+1)
	//4.������ת��ΪAnimalָ������
	cout << ((Animal*)((char*)&s + *((int *)*(int*)&s + 1)))->mA << endl;
}

int main()
{
	system("pause");
	return EXIT_SUCCESS;
}