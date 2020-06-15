#include <iostream>
#include"5种形状类.h"
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
	Shape** p;//等会用双重指针的自增

	for (p = pt; p < pt + 5; p++) // p = pt[5] -> 五个对象
	{							  //  p->五个对象（数组）->对象内函数
		(*p)->showShapeName();			//相当于 pt[0]->showShapeName();
		cout << "面积为 \t" << (*p)->Area() << endl;
		sum += (*p)->Area();
	}

	cout << "总面积为 \t" << sum << endl;
	system("pause");
	return 0;
}
