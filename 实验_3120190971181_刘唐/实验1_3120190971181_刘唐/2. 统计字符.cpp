#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	while (1)//ʹ����������ʾ��һ������
	{
		int a = 0, sp = 0, fh = 0, d = 0, hz = 0;
		char x='0';
		cout << "�������ַ��ǣ�";
		while (cin>>x)
		{
			if (x == 32)sp++;//space�ո�++
			else if ((x > 32 && x < 48) || (x > 57 && x < 65) || (x > 122 && x < 127)|| (x > 90 && x < 97))fh++;//����++//��˵�����ŷֲ���ô��ô�Ұ�
			else if (x > 47 && x < 58)d++;//digital����++
			else if ((x > 64 && x < 123)&&!(x>90&&x<97))a++;//��ĸ++,����91��96���ڷ��ţ���ȡ���ų���
			else if (x == '\n')break;
			else hz++;//�����ַ�++����ʵ�����Ҳ�洢������������ˣ�ֻҪ��һ�ξͲ����
		}
		if (hz%2==1)
		{
			cout<<"�����˴������顣";//���������ȡ�������������������
		}
		cout << "��ĸ������" << a << endl;
		cout << "���ָ�����" << d << endl;
		cout << "�ո������" << sp << endl;
		cout << "���Ÿ�����" << fh << endl;
		cout << "�����ַ�����" << hz/2 << endl;
	}
	system("pause");
	return 0;
}