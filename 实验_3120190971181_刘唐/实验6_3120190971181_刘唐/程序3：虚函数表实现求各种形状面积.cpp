#include <iostream>
using namespace std;

class Shape							//形状接口
{
public:
	Shape() {}						//构造函数，本基类无任何数据成员
	virtual ~Shape() {}				//虚析构函数，只须派生类收尾

	virtual double Area() { return 0; }
	virtual void showShapeName() = 0;//函数名有点长，主要是因为之前一直遵循“输出最好不要再函数内实现，所以加了show的单词。
};

class Circle : public Shape			//圆形
{
	double radius;					//圆形只有周长属性（只用求面积嘛）
public:
	Circle(double r) { radius = r; }//圆构造函数接收半径
	~Circle() {}					//圆析构函数不用做事
	double Area() { return 3.14159 * radius * radius; }
	void showShapeName() { cout << "圆形的"; }
};
class Square : public Shape			//正方形
{
	double x;						//边长
public:
	Square(double a) { x = a; }		//边长属性初始化
	~Square() {}
	double Area() { return x * x; }
	void showShapeName() { cout << "正方形的"; }
};
class Rectangle : public Shape		//矩形
{
	double x, y;					//长，宽
public:
	Rectangle(double a, double b) { x = a; y = b; }//收入边长属性
	~Rectangle() {}
	double Area() { return x * y; }
	void showShapeName() { cout << "矩形的"; }
};
class Trapezoid : public Shape		//梯形
{
	double x, y, z;					//上底，下底，高
public:
	Trapezoid(double a, double b, double c) { x = a; y = b; z = c; }//收入三要素属性
	~Trapezoid() {}
	double Area() { return ((x + y) * z) / 2; }
	void showShapeName() { cout << "梯形的"; }
};
class Triangle : public Shape		//三角形
{
	double x, y;					// 底 ，高 or 高 ，底
public:
	Triangle(double a, double h) { x = a; y = h; }//收入底，高
	~Triangle() {}
	double Area() { return (x * y) / 2; }
	void showShapeName() { cout << "三角形的"; }
};

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
