#define _CRT_SECURE_NO_WARINGS
#include<iostream>
using namespace std;

int printArray(int arr[], int len)
{
	if (arr == NULL)
	{
		return -1;
	}

	if (len == 0)
	{
		return 0;
	}
}
//C���Դ����쳣������ȱ�ݣ�
//1.����ֵ��˼����ȷ
//2.����ֵֻ�ܷ���һ����Ϣ
//3.����ֵ���Ժ���


void test()
{
	int *arr = NULL;
	int len = 0;
	printArray(arr, len);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}