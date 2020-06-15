#include<iostream>
#include"IntArray.h"
using namespace std;

int main()
{
	IntArray array;
	int i, size = 0, v, max, min;
	int in[] = { 1,2,3,4,5 };
	array.setArray(5, in);//先进行初始化
	size = array.getSize();
	cout << "请输入" << size << "数字：" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> v;
		array.setVal(i, v);//初始化数组
	}
	max = array.getMaxVal();
	min = array.getMinVal();
	cout << "最大值为：" << max << endl;
	cout << "最小值为：" << min << endl;
	return 0;
}
