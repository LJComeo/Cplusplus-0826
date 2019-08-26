#include <iostream>
using namespace std;
/*
1、分别使用引用和宏完成交换方法（使用内联），体会两者异同
*/
//#define f(x,y) {x=x+y;y=x-y;x=x-y;}
inline void f(int &x, int &y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int __0main()
{
	int x = 3, y = 4;
	f(x,y);
	cout << x << y << endl;


	return 0;
}