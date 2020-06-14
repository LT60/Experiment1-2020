class IntArray
{
public:
	void setArray(int len, int* in);	//设置大小与位置
	int getSize();						//返回长度
	int setVal(int pos, int val);		//填入数据
	int getMaxVal();					//返回最大值
	int getMinVal();					//返回最小值
private:
	int* data;
	int size;
};
