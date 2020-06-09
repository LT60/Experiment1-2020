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

class Derived:public Base	//公有继承
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
		cout << "公有继承内部访问："<<endl;
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
		//cout << v1 << endl;
							//v1是Base的私有成员，任何继承不能访问！
		cout <<"基类公有成员v2："<< v2 << endl;	//基类的公有成员，派生内部可以访问
		cout <<"派生类私有成员v5: "<< v5 << endl;	//派生类的私有成员，派生类内部可以访问
		cout <<"派生类公有成员v6："<< v6 << endl;	//派生类的公有成员，派生类内外都可以访问

	}
};

int main(void) 
{

	//讨论公有继承访问权限：
	Derived obj = Derived(5, 6);//定义的时候：
	/*	v1=0
		v2=0
		v3=5
		v4=6	*/

	//obj.v1 = 8;
				//1.私有数据通过公有继承下来，在派生类的内部都不能访问。
	obj.v2 = 666;	//2.从Base公有继承，可以在外部访问。
	//obj.v3 = 2;
				//3.Dervied的私有成员，在类的外部不能访问。
	obj.v4 = 666;	//4.obj自己的公有成员，可以在外部访问

	//外部访问后：
	/*	v1=0
		v2=4
		v3=5
		v4=1	*/

	obj.func();
	//公有继承内部访问后：输出v2，v3，v4

	//讨论私有继承访问权限：
	Derived2 obj2 = Derived2(5, 6);//定义的时候：
	/*	v1=0
		v2=0
		v5=5
		v6=6	*/

	//obj.v1 = 8;
					//1.私有数据不能访问。
	//obj2.v2 = 4;	
					//2.从Base私有继承，只能在内部访问。
	//obj.v5 = 2;
				//3.Dervied2的私有成员，在类的外部不能访问。
	obj2.v6 = 666;	//4.obj自己的公有成员，可以在外部访问

	obj2.func();
	//私有继承内部访问后：输出v2,v5,v6
	return 0;
}