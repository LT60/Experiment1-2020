#include<iostream>
using namespace std;

class Shape			//接口类
{
public:
	virtual float Perimeter() = 0;
	virtual float Area() = 0;
};

class Circle :public Shape
{
	float r;
public:
	Circle(int a) { r = a; }
	float Perimeter() 
	{
		cout << 2 * 3.14 * r;
		return 0;
	}
	float Area()
	{
		cout << 3.14 * r * r;
		return 0;
	}
};
class Squre :public Shape 
{
	float l, h;
public:
	Squre(int a, int b) { l = a; h = b; }
	float Perimeter()
	{
		cout << 2 * (l + h);
		return 0;
	}
	float Area()
	{
		cout << l * h;
		return 0;
	}
};

int main()
{
	int a, b, d;
	cout << "请输入圆形的半径，矩形的底和高！\n";
	cin >> a >> b >> d;
	Shape *p ;
	Circle c(a);
	Squre s(b,d);
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