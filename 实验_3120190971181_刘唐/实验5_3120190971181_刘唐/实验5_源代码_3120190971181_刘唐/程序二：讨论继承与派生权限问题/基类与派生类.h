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

class Derived :public Base	//���м̳�
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
		cout << "���м̳��ڲ����ʣ�" << endl;
		//cout << v1 << endl;
							//v1��Base��˽�г�Ա���κμ̳в��ܷ��ʣ�
		cout << "���๫�г�Աv2:" << v2 << endl;	//����Ĺ��г�Ա���Թ��м̳У����Է���
		cout << "������˽�г�Աv3:" << v3 << endl;	//�������˽�г�Ա���������ڲ����Է���
		cout << "�����๫�г�Աv4:" << v4 << endl;	//������Ĺ��г�Ա�����������ⶼ���Է���
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
		cout << "˽�м̳��ڲ����ʣ�" << endl;
		//cout << v1 << endl;						//v1��Base��˽�г�Ա���κμ̳в��ܷ��ʣ�
		cout << "���๫�г�Աv2��" << v2 << endl;	//����Ĺ��г�Ա�������ڲ����Է���
		cout << "������˽�г�Աv5: " << v5 << endl;	//�������˽�г�Ա���������ڲ����Է���
		cout << "�����๫�г�Աv6��" << v6 << endl;	//������Ĺ��г�Ա�����������ⶼ���Է���

	}
};
