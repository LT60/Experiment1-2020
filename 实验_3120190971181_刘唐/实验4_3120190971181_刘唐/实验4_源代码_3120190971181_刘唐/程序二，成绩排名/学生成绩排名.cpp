//有n个学生的信息(包括学号，姓名，成绩)，要求按照成绩的高低顺序输出学生的信息。
#include<iostream>
#include"学生结构.h"
using namespace std;

int main(void)
{
    struct student arr[20], t;//t=temp
    int n, i, j, max;
    cout << "输入人数： ";
    cin >> n;
    cout << "输入学生信息：\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i].number;
        cin >> arr[i].name;
        cin >> arr[i].score;
    }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            if (arr[j].score < arr[j + 1].score) t = arr[j], arr[j] = arr[j + 1], arr[j + 1] = t;
    cout << "成绩排序如下：" << endl;
    for (i = 0; i < n; i++)
    {
        if (i)
            cout << endl;
        cout << arr[i].number <<" "<< arr[i].name <<"\t"<< arr[i].score;
    }
    cout << endl;
    return 0;
}