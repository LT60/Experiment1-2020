#include<iostream>
#include"基类与派生类.h"
using namespace std;

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