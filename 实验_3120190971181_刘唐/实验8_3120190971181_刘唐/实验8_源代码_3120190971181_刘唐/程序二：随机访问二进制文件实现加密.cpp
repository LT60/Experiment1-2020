#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream creatfile("source.txt", ios::out | ios::binary);//�����ļ�
	if (!creatfile)
	{
		cerr << "creat file failed";
		cout << endl;
		exit(1);
	}
	creatfile.write("Never Will I Change My Soul", 28);
	creatfile.close();
	cout << "ԭ�ļ��Ѵ������򿪲鿴��"; system("pause");
	//��Ҫ�޸�ԭ�ļ����ݣ��������Ϊ28���ַ�
	int secret[28] =
	{15,16,17,7,1,9,12,19,14,26,18,21,24,25,23,2,4,6,10,27,11,3,5,8,13,20,22,28};

	ifstream sourcefile("source.txt", ios::in | ios::binary);
	fstream secretfile("secret.txt", ios::out | ios::binary);
	char c[29];
	sourcefile.read(c, 28);
	for (int i = 0; i < 28; i++)
	{
		secretfile.seekp(secret[i]);	//����ָ��λ��
		secretfile.write(&c[i], 1);			//д��ָ��λ��
	}
	return 0;//��Ϊֱ�Ӿ͹رճ����ˣ����Բ�дclose����
}