#include<iostream>
using namespace std;
int main(void)
{
	while (1)
	{
		int a[18] = { 0 };                //����λ��
		char Role[] = { '_','I','L','O','V','E','Y','U','F','R' };//����Э�飬���Ը���
		char* r[10];
		cout << "�����룺";
		for (int i = 0; i < 10; i++)
		{
			r[i] = &Role[i];                 //����
		}
		for (int i = 0; i < 18; i++)
		{
			cin >> a[i];
		}
		cout << "��ϢΪ��";
		for (int i = 0; i < 18; i++)
		{
			cout << *r[a[i]];
		}
		cout << endl;

	}
	
	system("pause");
	return 0;
}