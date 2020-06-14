#include"ÐÎ×´½Ó¿Ú.h"
#include<iostream>
using namespace std;

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