#include<fstream>
#include<iostream>
using namespace std;

int C(ifstream& file);

int main(void)
{
	/*char f[20];
	for (int i = 0; (i < 20)&&(i!='\n'); i++)
	{
		cin >> f[i];
	}*///��`Z�㲻���������ڳ����ھ��Һð�
	for (int i = 0; i < 2; i++)
	{
		if (i==0)
		{
			ifstream file("a.txt", ios::in);
			if (!file)
			{
				cerr << "open file error" << endl;
				exit(1);
			}
			cout << "a.txt������ͳ�����£�" << endl;
			C(file);
		}
		else
		{
			ifstream file2("THE FORCE AWAKENS.txt", ios::in);
			if (!file2)
			{
				cerr << "open file error" << endl;
				exit(1);
			}
			cout << "THE FORCE AWAKENS.txt������ͳ�����£�" << endl;
			C(file2);
		}
	}
}

int C(ifstream &file)
{
	char c;
	int l = 0, b = 0, d = 0, ch = 0;
	//Сд��ĸ����д�����֣� ����
	while (file.peek() != EOF)
	{
		file >> c;
		if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123))
		{
			ch++;
		}
		else if (c >= 48 && c <= 57)
		{
			d++;
		}
		else if (c >= 65 && c <= 90)
		{
			b++;
		}
		else
		{
			l++;
		}
	}
	file.close();
	cout << "Сд��ĸ��" << l << "��" << endl;
	cout << "��д��ĸ��" << b << "��" << endl;
	cout << "������" << d << "��" << endl;
	cout << "������" << ch << "��" << endl << endl;
	return 0;
}