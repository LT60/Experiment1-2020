#include <iostream>
#include"student_max.h"
using namespace std;

void max(Student* A, int n)//对象指针
{
    Student* p = A, ma(0, 0);
    float max;
    for (max = A->score; p < A + n; p++)
    {
        if ((p->score) > max)
        {
            max = p->score;
            ma = *p;
        }
    }
    cout << "NO.1 学生的信息: \n" << "ID：" << ma.id << endl << "分数：" << ma.score << endl;
}
