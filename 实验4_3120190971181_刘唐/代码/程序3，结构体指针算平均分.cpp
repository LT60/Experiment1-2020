//有n个学生的信息(包括学号，姓名，成绩)，要求按照成绩的高低顺序输出学生的信息。
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
    cout << "输入：";
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
    
    cout << "成绩平均值：" << sum/n << endl;
    cout << endl;
    return 0;
}