#include <iostream>
#include <typeinfo>
#include <stdlib.h>
using namespace std;

void func(int &a, int &b)//����,����ָ��һ��������Ȼ��Ͳ��ܸ���
						//���������û����еĸ���					//���õĺô�Ҳ��������ָ����
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
//ָ��ֲ�������ָ�벻��������ֵ
//ָ��ֲ����������ò���������ֵ
//�������þ��Ƿ��ر�������
int _main()
{
	int ming = 5;
	int &xiaoming = ming;//xiaoming ���� ming ��С��һ���������õ�ͬһƬ�ռ�

	cout << &ming << endl;
	cout << &xiaoming << endl;

	//int a = 5;
	//int b = 6;
	//func(a, b);
	//cout << a << b << endl;

	const int a = 10;
	const int & ra = a;
	double b = 1.23;
	double &rb = b;

	int i = 0;
	auto j = &i;

	cout << typeid(j).name() << endl;//�������j�����������Զ��ж����ͣ�
	system("pause");
	return 0;
}