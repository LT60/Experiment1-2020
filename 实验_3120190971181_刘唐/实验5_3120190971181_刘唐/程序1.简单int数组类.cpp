#include<iostream>
using namespace std;

class IntArray
{
public:
	void setArray(int len, int* in);
	int getSize();
	int setVal(int pos, int val);
	int getMaxVal();
	int getMinVal();
private:
	int* data;
	int size;
};

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


int IntArray::getSize() {
	return size;//获取数组大小
}
int IntArray::setVal(int pos, int val)
{
	if ((pos < 0) || (pos > size))return -1;//检查位置是否合法
	data[pos] = val;//pos是位置0，1，2，3，val是值
	return 0;
}
int IntArray::getMaxVal() //得到最大值
{
	int temp = data[0];
	for (int i = 0; i < size; i++)
	{
		if (data[i] > temp) {
			temp = data[i];
		}
	}
	return temp;
}
int IntArray::getMinVal() {//得到最小值
	int temp = data[0];
	for (int i = 0; i < size; i++)
	{
		if (data[i] < temp) {
			temp = data[i];
		}
	}
	return temp;

}
void IntArray::setArray(int len, int* in) {

	size = len;//大小空间性分配
	data = new int[len];//把data初始化了len这么长的数据空间
	for (int i = 0; i < len; ++i)data[i] = in[i];
}