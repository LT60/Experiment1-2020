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

class Derived:public Base	//���м̳�
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
		cout << "���м̳��ڲ����ʣ�"<<endl;
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
		//cout << v1 << endl;
							//v1��Base��˽�г�Ա���κμ̳в��ܷ��ʣ�
		cout <<"���๫�г�Աv2��"<< v2 << endl;	//����Ĺ��г�Ա�������ڲ����Է���
		cout <<"������˽�г�Աv5: "<< v5 << endl;	//�������˽�г�Ա���������ڲ����Է���
		cout <<"�����๫�г�Աv6��"<< v6 << endl;	//������Ĺ��г�Ա�����������ⶼ���Է���

	}
};

int main(void) 
{

	//���۹��м̳з���Ȩ�ޣ�
	Derived obj = Derived(5, 6);//�����ʱ��
	/*	v1=0
		v2=0
		v3=5
		v4=6	*/

	//obj.v1 = 8;
				//1.˽������ͨ�����м̳�����������������ڲ������ܷ��ʡ�
	obj.v2 = 666;	//2.��Base���м̳У��������ⲿ���ʡ�
	//obj.v3 = 2;
				//3.Dervied��˽�г�Ա��������ⲿ���ܷ��ʡ�
	obj.v4 = 666;	//4.obj�Լ��Ĺ��г�Ա���������ⲿ����

	//�ⲿ���ʺ�
	/*	v1=0
		v2=4
		v3=5
		v4=1	*/

	obj.func();
	//���м̳��ڲ����ʺ����v2��v3��v4

	//����˽�м̳з���Ȩ�ޣ�
	Derived2 obj2 = Derived2(5, 6);//�����ʱ��
	/*	v1=0
		v2=0
		v5=5
		v6=6	*/

	//obj.v1 = 8;
					//1.˽�����ݲ��ܷ��ʡ�
	//obj2.v2 = 4;	
					//2.��Base˽�м̳У�ֻ�����ڲ����ʡ�
	//obj.v5 = 2;
				//3.Dervied2��˽�г�Ա��������ⲿ���ܷ��ʡ�
	obj2.v6 = 666;	//4.obj�Լ��Ĺ��г�Ա���������ⲿ����

	obj2.func();
	//˽�м̳��ڲ����ʺ����v2,v5,v6
	return 0;
}