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
	creat.close();//��������ļ�����ʱֻ�������������noreplace����trunc��û��
	/*
	fstream creat("source.txt", ios::trunc);
	if (!creat)
	{
		cerr << "creat file failed";
		cout << endl;
	}
	creat.close();
	*///û�ð���֪����ô����
	cout << "The source file has been created.Please ���� into \"soruce.txt\" by keyboard or copy." << endl;
	cout << "ԭ�ļ��ѱ���������ͨ�����̻���ճ������source.txt���ļ�������" << endl;
	system("pause");
	ifstream infile("source.txt",ios::in);//open file by read in
	if (!infile)
	{	
		cerr << "Open source file error" << endl;
		cout << "�봴��ԭ�ļ����ļ�����source.txt)�������ļ��ڱ༭��" << endl;
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
	cout << "ת����ϣ�ת���������Ѵ��롰target.txt���ļ�" << endl;
	system("pause");
}