#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream creatfile("source.txt", ios::out | ios::binary);//创建文件
	if (!creatfile)
	{
		cerr << "creat file failed";
		cout << endl;
		exit(1);
	}
	creatfile.write("Never Will I Change My Soul", 28);
	creatfile.close();
	cout << "原文件已创建。打开查看后"; system("pause");
	//若要修改原文件内容，内容务必为28个字符
	int secret[28] =
	{15,16,17,7,1,9,12,19,14,26,18,21,24,25,23,2,4,6,10,27,11,3,5,8,13,20,22,28};

	ifstream sourcefile("source.txt", ios::in | ios::binary);
	fstream secretfile("secret.txt", ios::out | ios::binary);
	char c[29];
	sourcefile.read(c, 28);
	for (int i = 0; i < 28; i++)
	{
		secretfile.seekp(secret[i]);	//调整指针位置
		secretfile.write(&c[i], 1);			//写入指针位置
	}
	return 0;//因为直接就关闭程序了，所以不写close函数
}