#include<iostream>
#include<fstream>
using namespace std;
//二进制文件无法直接阅读，所以可以用来存密码。

int main()
{
	int secret[28] =
	{ 15,16,17,7,1,9,12,19,14,26,18,21,24,25,23,2,4,6,10,27,11,3,5,8,13,20,22,28 };

	fstream secretfile("secret.txt", ios::out | ios::binary | ios::in);
	if (!secretfile)
	{
		cerr << "read secret file failed";
		exit(1);
	}

	char c[29];
	fstream breakfile("break.txt", ios::out | ios::binary);
	if (!breakfile)
	{
		cerr << "creat break file error";
		exit(1);
	}

	for (int i = 0; i < 28; i++)
	{
		secretfile.seekp(secret[i]);
		secretfile.read(&c[i], 1);
		breakfile.write(&c[i], 1);
	}
}