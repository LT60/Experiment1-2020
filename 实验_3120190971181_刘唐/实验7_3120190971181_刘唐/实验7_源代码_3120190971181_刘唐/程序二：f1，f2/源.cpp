#include<fstream>
#include<iostream>
using namespace std;

int main(void)
{
	int a[20] = { 0 };
	ofstream outfile1("f1.dat", ios::out);
	ofstream outfile2("f2.dat", ios::out);
	if (!outfile1 || !outfile2)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	cout << "������20��������";
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> a[j];
			if (i == 0)	outfile1 << a[j] << " ";
			else		outfile2 << a[j] << " ";
		}
	}
	outfile1.close();
	outfile2.close();//(1)finish
	cout << "�Ѿ���ɵ�һС�⣺��20�������ֱ��������������ļ��У�ÿ���ļ��д��10��������" << endl << "�����Ŀ�е�f1.dat��f2.dat�鿴" << endl;
	system("pause");

	ifstream infile1("f1.dat", ios::in);
	ofstream outfile("f2.dat", ios::app);
	for (int i = 0; i < 10; i++)
	{
		infile1 >> a[i];
		outfile << a[i] << " ";
	}
	infile1.close();
	outfile.close();//(2)finish
	cout << "�Ѿ���ɵڶ�С�⣺��f1.dat�е����ݴ�ŵ�f2.dat�ļ�ԭ�����ݵĺ���" << endl << "�����Ŀ�е�f2.bat�鿴" << endl;
	system("pause");

	ifstream ifile("f2.dat", ios::in);
	for (int i = 0; i < 20; i++)
	{
		ifile >> a[i];
	}

	int temp;
	for (int i = 19; i >= 0; i--)//ð����
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	ifile.close();
	ofstream ofile("f2.dat", ios::out);
	for (int i = 0; i < 20; i++ ) ofile << a[i] << " ";
	ofile.close();
	cout << "�Ѿ���ɵ���С�⣺��f2.dat�е����ݰ���С�����˳���ŵ�f2.dat������ԭ�������ݣ�" << endl << "�����Ŀ�е�f2.bat�鿴" << endl;
	system("pause");
}