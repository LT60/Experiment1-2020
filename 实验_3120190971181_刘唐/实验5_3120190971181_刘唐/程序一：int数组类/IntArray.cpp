#include"IntArray.h"

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