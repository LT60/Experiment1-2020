#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream creat("source.txt", ios::out);
	if (!creat)
	{
		cerr << "creat file failed";
		cout << endl;
	}
	creat.close();//创建这个文件，暂时只能用这个方法，noreplace或者trunc都没用
	/*
	fstream creat("source.txt", ios::trunc);
	if (!creat)
	{
		cerr << "creat file failed";
		cout << endl;
	}
	creat.close();
	*///没用啊不知道怎么回事
	cout << "The source file has been created.Please 输入 into \"soruce.txt\" by keyboard or copy." << endl;
	cout << "原文件已被创建，请通过键盘或复制粘贴往“source.txt”文件中输入" << endl;
	system("pause");
	ifstream infile("source.txt",ios::in);//open file by read in
	if (!infile)
	{	
		cerr << "Open source file error" << endl;
		cout << "请创建原文件（文件名：source.txt)，并在文件内编辑。" << endl;
		abort();
	}
	ofstream outfile("target.txt", ios::binary|ios::out);
	if (!outfile)
	{
		cerr << "Open target file failed." << endl;
		abort();
	}

	char c[35];
	while (infile.peek()!=EOF)
	{
		infile >> c;
		outfile << c << " ";

	}
	infile.close();
	outfile.close();
	cout << "转换完毕，转换后内容已存入“target.txt”文件" << endl;
	system("pause");
}