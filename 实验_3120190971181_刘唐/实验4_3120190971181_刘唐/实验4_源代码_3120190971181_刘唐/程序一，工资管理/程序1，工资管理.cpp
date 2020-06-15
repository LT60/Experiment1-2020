#include<iostream>
#include"person.h"
using namespace std;

int main(void)
{
	person p1 = { "李华",3120190971,20000.00 };
	person p2 = p1;
	cout <<endl <<"Id:" << p2.id << "\t" << p2.name << "\t工资：" << p2.salary << endl<<endl;//只有一行输出，所以给多几行空格好看一点
}