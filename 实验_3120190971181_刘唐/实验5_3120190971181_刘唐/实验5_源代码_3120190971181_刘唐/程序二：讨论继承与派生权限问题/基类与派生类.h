#include<iostream>
using namespace std;

class Base
{
	int v1;
public:
	int v2;
	Base(int a = 0, int b = 0)
	{
		v1 = a;
		v2 = b;
	}
};

class Derived :public Base	//公有继承
{
	int v3;
public:
	int v4;
	Derived(int a = 0, int b = 0)
	{
		v3 = a;
		v4 = b;
	}
	void func()
	{
		cout << "公有继承内部访问：" << endl;
		//cout << v1 << endl;
							//v1是Base的私有成员，任何继承不能访问！
		cout << "基类公有成员v2:" << v2 << endl;	//基类的公有成员，以公有继承，可以访问
		cout << "派生类私有成员v3:" << v3 << endl;	//派生类的私有成员，派生类内部可以访问
		cout << "派生类公有成员v4:" << v4 << endl;	//派生类的公有成员，派生类内外都可以访问
	}
};

class Derived2 : private Base
{
	int v5;
public:
	int v6;
	Derived2(int a = 0, int b = 0)
	{
		v5 = a;
		v6 = b;
	}
	void func()
	{
		cout << "私有继承内部访问：" << endl;
		//cout << v1 << endl;						//v1是Base的私有成员，任何继承不能访问！
		cout << "基类公有成员v2：" << v2 << endl;	//基类的公有成员，派生内部可以访问
		cout << "派生类私有成员v5: " << v5 << endl;	//派生类的私有成员，派生类内部可以访问
		cout << "派生类公有成员v6：" << v6 << endl;	//派生类的公有成员，派生类内外都可以访问

	}
};
