#include<iostream>
#include"Բ���뷽��.h"
using namespace std;

int main()
{
	int a, b, d;
	cout << "������Բ�εİ뾶�����εĵ׺͸ߣ�\n";
	cin >> a >> b >> d;
	Shape* p;
	Circle c(a);
	Squre s(b, d);
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