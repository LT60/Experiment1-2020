//��n��ѧ������Ϣ(����ѧ�ţ��������ɼ�)��Ҫ���ճɼ��ĸߵ�˳�����ѧ������Ϣ��
#include<iostream>
using namespace std;

struct student
{
    long long  number;//id
    char name[21];
    int score;
};

int main(void)
{
    struct student arr[20], t;//t=temp
    int n, i, j, max;
    cout << "���룺";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin>>arr[i].number;
        cin>>arr[i].name;
        cin>>arr[i].score;
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            if (arr[j].score < arr[j + 1].score) t = arr[j], arr[j] = arr[j + 1], arr[j + 1] = t;
    cout << "�ɼ��������£�"<<endl;
    for (i = 0; i < n; i++)
    {
        if (i)
            cout << endl;
        cout << arr[i].number << arr[i].name << arr[i].score;
    }
    cout << endl;
    return 0;
}