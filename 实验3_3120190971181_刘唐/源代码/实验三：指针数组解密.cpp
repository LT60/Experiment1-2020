#include<iostream>
using namespace std;
int main(void)
{
	while (1)
	{
		int a[18] = { 0 };                //输入位置
		char Role[] = { '_','I','L','O','V','E','Y','U','F','R' };//密码协议，可以更改
		char* r[10];
		cout << "请输入：";
		for (int i = 0; i < 10; i++)
		{
			r[i] = &Role[i];                 //对齐
		}
		for (int i = 0; i < 18; i++)
		{
			cin >> a[i];
		}
		cout << "信息为：";
		for (int i = 0; i < 18; i++)
		{
			cout << *r[a[i]];
		}
		cout << endl;

	}
	
	system("pause");
	return 0;
}