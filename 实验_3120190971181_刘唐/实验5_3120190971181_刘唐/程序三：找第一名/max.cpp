#include <iostream>
#include"student_max.h"
using namespace std;

void max(Student* A, int n)//����ָ��
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
    cout << "NO.1 ѧ������Ϣ: \n" << "ID��" << ma.id << endl << "������" << ma.score << endl;
}
