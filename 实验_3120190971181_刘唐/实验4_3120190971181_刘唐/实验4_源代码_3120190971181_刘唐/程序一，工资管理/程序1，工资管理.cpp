#include<iostream>
#include"person.h"
using namespace std;

int main(void)
{
	person p1 = { "�",3120190971,20000.00 };
	person p2 = p1;
	cout <<endl <<"Id:" << p2.id << "\t" << p2.name << "\t���ʣ�" << p2.salary << endl<<endl;//ֻ��һ����������Ը��༸�пո�ÿ�һ��
}