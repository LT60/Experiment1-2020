#include<iostream>
#include"IntArray.h"
using namespace std;

int main()
{
	IntArray array;
	int i, size = 0, v, max, min;
	int in[] = { 1,2,3,4,5 };
	array.setArray(5, in);//�Ƚ��г�ʼ��
	size = array.getSize();
	cout << "������" << size << "���֣�" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> v;
		array.setVal(i, v);//��ʼ������
	}
	max = array.getMaxVal();
	min = array.getMinVal();
	cout << "���ֵΪ��" << max << endl;
	cout << "��СֵΪ��" << min << endl;
	return 0;
}
