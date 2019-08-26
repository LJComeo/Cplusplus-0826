#include <iostream>
#include <typeinfo>
#include <stdlib.h>
using namespace std;

void func(int &a, int &b)//引用,必须指向一个变量，然后就不能更改
						//函数传引用会运行的更快					//引用的好处也可以用在指针上
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
//指向局部变量的指针不能做返回值
//指向局部变量的引用不能做返回值
//返回引用就是返回变量本身
int _main()
{
	int ming = 5;
	int &xiaoming = ming;//xiaoming 就是 ming 的小名一样，两个用的同一片空间

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

	cout << typeid(j).name() << endl;//输出的是j的类型名（自动判断类型）
	system("pause");
	return 0;
}