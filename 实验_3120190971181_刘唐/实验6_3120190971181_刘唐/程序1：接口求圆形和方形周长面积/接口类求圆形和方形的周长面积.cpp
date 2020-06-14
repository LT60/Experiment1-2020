#include<iostream>
#include"圆形与方形.h"
using namespace std;

int main()
{
	int a, b, d;
	cout << "请输入圆形的半径，矩形的底和高！\n";
	cin >> a >> b >> d;
	Shape* p;
	Circle c(a);
	Squre s(b, d);
	p = &c;
	cout << "圆的周长：";
	p->Perimeter();
	cout << "\n圆的面积：";
	p->Area();
	cout << "\n矩形的周长：";
	p = &s;
	p->Perimeter();
	cout << "\n矩形的面积：";
	p->Area();
	cout << endl;
	system("pause");
}