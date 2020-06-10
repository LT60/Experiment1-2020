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


int IntArray::getSize() {
	return size;//��ȡ�����С
}
int IntArray::setVal(int pos, int val)
{
	if ((pos < 0) || (pos > size))return -1;//���λ���Ƿ�Ϸ�
	data[pos] = val;//pos��λ��0��1��2��3��val��ֵ
	return 0;
}
int IntArray::getMaxVal() //�õ����ֵ
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
int IntArray::getMinVal() {//�õ���Сֵ
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

	size = len;//��С�ռ��Է���
	data = new int[len];//��data��ʼ����len��ô�������ݿռ�
	for (int i = 0; i < len; ++i)data[i] = in[i];
}