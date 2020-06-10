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
	//Ĭ���������ѧ������

	fstream createfile{ "stud.dat",ios::out };	//�Զ������ļ�ģ��
	if (!createfile)
	{
		cerr << "create file failed.";
	}
	createfile.close();

	ofstream ofile("stud.dat", ios::out|ios::binary);
	//��������������ļ�������iofile
	if (!ofile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	for (int i = 0; i < 5; i++)
	{
		ofile.write((char*)&stud[i], sizeof(stud[i]));	//����������
	}
	ofile.close();
	cout << "�Ѿ�����Ϣд��������ļ��У��򿪲鿴��";
	system("pause");

	cout << "�����ǵ�1��3��5��ͬѧ����Ϣ��";
	fstream iofile{ "stud.dat",ios::in | ios::out | ios::binary };
	Student tempstud[5];	//Ϊ����ʾ1��3��5��ͬѧ��Ϣ
	for (int i = 0; i < 5; i+=2)
	{
		iofile.seekg(i * sizeof(stud[i]), ios::beg);	//��ɫ�����ߺ��ѿ�
		//��λ����Ӧλ��
		iofile.read((char*)&tempstud[i], sizeof(tempstud[0]));
		//��ȡ����Ӧλ��
		cout << tempstud[i].id << " " << tempstud[i].name << " " << tempstud[i].score << endl;
		//�������Ӧֵ
	}
	cout << endl;
	
	stud[2].id = 1012;			//�޸ĵ�����ѧ�����ڴ�����
	strcpy_s(stud[2].name, "Wu");
	stud[2].score = 90;
	iofile.seekg(2 * sizeof(stud[0]), ios::beg);		//��λ
	iofile.write((char*)&stud[2], sizeof(stud[0]));		//�޸ĵ�����ͬѧ�ļ�����

	cout << "�������޸ĵ�����ͬѧ��Ϣ������ͬѧ��Ϣ��";
	iofile.seekg(0, ios::beg);	//���¶�λ����ͷ
	for (int i = 0; i < 5; i++)
	{
		iofile.read((char*)&stud[i], sizeof(stud[i]));	//���ļ����ݶ����ڴ�
		cout << stud[i].id << " " << stud[i].name << " " << stud[i].score << endl;
	}
	iofile.close();	//����û����䣬Ӧ���ǳ���ִ������Զ��ر��ļ��ɡ�
	system("pause");
	return 0;
}