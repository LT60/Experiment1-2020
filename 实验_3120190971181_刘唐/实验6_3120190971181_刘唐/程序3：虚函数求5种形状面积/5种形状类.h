#include<iostream>
#include"基类.h"
using namespace std;

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
