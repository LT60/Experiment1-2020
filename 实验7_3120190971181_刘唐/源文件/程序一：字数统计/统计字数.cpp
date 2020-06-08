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
	}*///用`Z搞不定，还是在程序内就找好吧
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
			cout << "a.txt的字数统计如下：" << endl;
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
			cout << "THE FORCE AWAKENS.txt的字数统计如下：" << endl;
			C(file2);
		}
	}
}

int C(ifstream &file)
{
	char c;
	int l = 0, b = 0, d = 0, ch = 0;
	//小写字母，大写，数字， 符号
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
	cout << "小写字母有" << l << "个" << endl;
	cout << "大写字母有" << b << "个" << endl;
	cout << "数字有" << d << "个" << endl;
	cout << "符号有" << ch << "个" << endl << endl;
	return 0;
}