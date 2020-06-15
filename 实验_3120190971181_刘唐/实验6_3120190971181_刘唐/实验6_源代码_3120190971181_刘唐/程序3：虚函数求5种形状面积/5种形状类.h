#include<iostream>
#include"����.h"
using namespace std;

class Circle : public Shape			//Բ��
{
	double radius;					//Բ��ֻ���ܳ����ԣ�ֻ��������
public:
	Circle(double r) { radius = r; }//Բ���캯�����հ뾶
	~Circle() {}					//Բ����������������
	double Area() { return 3.14159 * radius * radius; }
	void showShapeName() { cout << "Բ�ε�"; }
};
class Square : public Shape			//������
{
	double x;						//�߳�
public:
	Square(double a) { x = a; }		//�߳����Գ�ʼ��
	~Square() {}
	double Area() { return x * x; }
	void showShapeName() { cout << "�����ε�"; }
};
class Rectangle : public Shape		//����
{
	double x, y;					//������
public:
	Rectangle(double a, double b) { x = a; y = b; }//����߳�����
	~Rectangle() {}
	double Area() { return x * y; }
	void showShapeName() { cout << "���ε�"; }
};
class Trapezoid : public Shape		//����
{
	double x, y, z;					//�ϵף��µף���
public:
	Trapezoid(double a, double b, double c) { x = a; y = b; z = c; }//������Ҫ������
	~Trapezoid() {}
	double Area() { return ((x + y) * z) / 2; }
	void showShapeName() { cout << "���ε�"; }
};
class Triangle : public Shape		//������
{
	double x, y;					// �� ���� or �� ����
public:
	Triangle(double a, double h) { x = a; y = h; }//����ף���
	~Triangle() {}
	double Area() { return (x * y) / 2; }
	void showShapeName() { cout << "�����ε�"; }
};
