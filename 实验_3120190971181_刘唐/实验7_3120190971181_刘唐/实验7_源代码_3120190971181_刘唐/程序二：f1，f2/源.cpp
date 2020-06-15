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
	cout << "请输入20个整数：";
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
	cout << "已经完成第一小题：将20个整数分别存放在两个磁盘文件中（每个文件中存放10个整数）" << endl << "请打开项目中的f1.dat，f2.dat查看" << endl;
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
	cout << "已经完成第二小题：将f1.dat中的数据存放到f2.dat文件原有数据的后面" << endl << "请打开项目中的f2.bat查看" << endl;
	system("pause");

	ifstream ifile("f2.dat", ios::in);
	for (int i = 0; i < 20; i++)
	{
		ifile >> a[i];
	}

	int temp;
	for (int i = 19; i >= 0; i--)//冒个泡
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
	cout << "已经完成第三小题：将f2.dat中的数据按从小到大的顺序存放到f2.dat（覆盖原来的数据）" << endl << "请打开项目中的f2.bat查看" << endl;
	system("pause");
}