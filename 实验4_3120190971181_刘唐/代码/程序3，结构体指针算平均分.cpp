//��n��ѧ������Ϣ(����ѧ�ţ��������ɼ�)��Ҫ���ճɼ��ĸߵ�˳�����ѧ������Ϣ��
#include<iostream>
using namespace std;

struct student
{
    char name[21];
    int score;
};

int main(void)
{
    struct student arr[20], *p=arr;
    int n, i, sum=0 ;
    cout << "���룺";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].name;
        cin >> arr[i].score;
    }
    for (i = 0; i < n - 1; i++)
    {
        sum += p->score;
        p++;
    }
    
    cout << "�ɼ�ƽ��ֵ��" << sum/n << endl;
    cout << endl;
    return 0;
}