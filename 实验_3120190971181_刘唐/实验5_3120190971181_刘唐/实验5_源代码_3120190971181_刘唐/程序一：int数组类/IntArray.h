class IntArray
{
public:
	void setArray(int len, int* in);	//���ô�С��λ��
	int getSize();						//���س���
	int setVal(int pos, int val);		//��������
	int getMaxVal();					//�������ֵ
	int getMinVal();					//������Сֵ
private:
	int* data;
	int size;
};
