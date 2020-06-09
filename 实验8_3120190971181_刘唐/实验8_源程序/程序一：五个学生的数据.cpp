#include<fstream>
#include<iostream>
using namespace std;

struct Student
{
	int id;
	char name[20];
	float score;
};

int main()
{
	Student stud[5] = { 10001,"Neo",100,10002,"ChenJie",99,10003,"Ray",98,10004, "Tan",97,10005,"Lint",96};
	//默认输入五个学生数据

	fstream createfile{ "stud.dat",ios::out };	//自动创建文件模块
	if (!createfile)
	{
		cerr << "create file failed.";
	}
	createfile.close();

	ofstream ofile("stud.dat", ios::out|ios::binary);
	//定义输出二进制文件流对象iofile
	if (!ofile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		ofile.write((char*)&stud[i], sizeof(stud[i]));	//输出五个数据
	}
	ofile.close();
	cout << "已经将信息写入二进制文件中，打开查看后";
	system("pause");

	cout << "以下是第1、3、5名同学的信息：";
	fstream iofile{ "stud.dat",ios::in | ios::out | ios::binary };
	Student tempstud[5];	//为了显示1、3、5个同学信息
	for (int i = 0; i < 5; i+=2)
	{
		iofile.seekg(i * sizeof(stud[i]), ios::beg);	//青色波浪线好难看
		//定位到相应位置
		iofile.read((char*)&tempstud[i], sizeof(tempstud[0]));
		//读取到相应位置
		cout << tempstud[i].id << " " << tempstud[i].name << " " << tempstud[i].score << endl;
		//输出到相应值
	}
	cout << endl;
	
	stud[2].id = 1012;			//修改第三个学生的内存数据
	strcpy_s(stud[2].name, "Wu");
	stud[2].score = 90;
	iofile.seekg(2 * sizeof(stud[0]), ios::beg);		//定位
	iofile.write((char*)&stud[2], sizeof(stud[0]));		//修改第三名同学文件数据

	cout << "以下是修改第三名同学信息后所有同学信息：";
	iofile.seekg(0, ios::beg);	//重新定位到开头
	for (int i = 0; i < 5; i++)
	{
		iofile.read((char*)&stud[i], sizeof(stud[i]));	//将文件数据读入内存
		cout << stud[i].id << " " << stud[i].name << " " << stud[i].score << endl;
	}
	iofile.close();	//书上没有这句，应该是程序执行完毕自动关闭文件吧。
	system("pause");
	return 0;
}