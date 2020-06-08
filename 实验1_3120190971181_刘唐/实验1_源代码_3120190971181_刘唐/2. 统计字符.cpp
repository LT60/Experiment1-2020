#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	while (1)//使多组数据显示于一个窗口
	{
		int a = 0, sp = 0, fh = 0, d = 0, hz = 0;
		char x='0';
		cout << "请输入字符们！";
		while (cin>>x)
		{
			if (x == 32)sp++;//space空格++
			else if ((x > 32 && x < 48) || (x > 57 && x < 65) || (x > 122 && x < 127)|| (x > 90 && x < 97))fh++;//符号++//话说，符号分布怎么这么乱啊
			else if (x > 47 && x < 58)d++;//digital数字++
			else if ((x > 64 && x < 123)&&!(x>90&&x<97))a++;//字母++,其中91到96属于符号，用取非排除掉
			else if (x == '\n')break;
			else hz++;//汉字字符++，其实错误的也存储在这个变量内了，只要错一次就不对嘛。
		}
		if (hz%2==1)
		{
			cout<<"出现了错误！请检查。";//包含错误读取的量是奇数，程序出错
		}
		cout << "字母个数：" << a << endl;
		cout << "数字个数：" << d << endl;
		cout << "空格个数：" << sp << endl;
		cout << "符号个数：" << fh << endl;
		cout << "汉字字符数：" << hz/2 << endl;
	}
	system("pause");
	return 0;
}