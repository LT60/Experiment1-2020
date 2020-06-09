#include<iostream>
using namespace std;

class Shape			//�ӿ���
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
	cout << "������Բ�εİ뾶�����εĵ׺͸ߣ�\n";
	cin >> a >> b >> d;
	Shape *p ;
	Circle c(a);
	Squre s(b,d);
	p = &c;
	cout << "Բ���ܳ���";
	p->Perimeter();
	cout << "\nԲ�������";
	p->Area();
	cout << "\n���ε��ܳ���";
	p = &s;
	p->Perimeter();
	cout << "\n���ε������";
	p->Area();
	cout << endl;
	system("pause");
}