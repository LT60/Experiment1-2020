#include <iostream>
#include"5����״��.h"
using namespace std;

int main()
{
	Circle circle(1);
	Square square(1);
	Rectangle rectangle(1, 1);
	Trapezoid trapezoid(1, 1, 1);
	Triangle triangle(1, 1);
	double sum = 0;
	Shape* pt[5] = { &circle, &square, &rectangle, &trapezoid, &triangle };
	Shape** p;//�Ȼ���˫��ָ�������

	for (p = pt; p < pt + 5; p++) // p = pt[5] -> �������
	{							  //  p->����������飩->�����ں���
		(*p)->showShapeName();			//�൱�� pt[0]->showShapeName();
		cout << "���Ϊ \t" << (*p)->Area() << endl;
		sum += (*p)->Area();
	}

	cout << "�����Ϊ \t" << sum << endl;
	system("pause");
	return 0;
}
