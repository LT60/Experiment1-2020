#include<iostream>
#include<cstdlib>//��ʵvs2019�����Զ���ͣ��ϵͳ��ͣ�ƺ�û�ã���Ϥ����������
using namespace std;
int main()
{
	float x = 0;
	while (1)//һ�����ڣ��㶨���У�
	{
		cout << "�����߸���ֵ��";//�˴������߸�������Ϊ�˷���һ�μ���������
		for (int i = 0; i < 7; i++)
		{
			bool a=scanf_s("%f",&x);//��������//��Ϥ���뻷����C++����C���������������ʹ��c���Է�����롣����ͨ��
			if (a == 1)
			{
				if (x < 1)// ѡ��ṹ ���y��ֵ
				{
					cout << x << "\t";
				}
				else if (x >= 1 && x < 10)
				{
					cout << 2 * x - 1 << "\t";
				}
				else if (x >= 10)
				{
					cout << 3 * x - 11 << "\t";
				}
				else cout << "error��";
			}
			else cout << "�����������������룡";

		}
		cout << "\n\n";//�ָ������������
		system("pause");
	}
	return 0;//��ʵvs2019����˵c++�����Զ����ϡ�return 0����������Բ�д����Ϥ���뻷����
}