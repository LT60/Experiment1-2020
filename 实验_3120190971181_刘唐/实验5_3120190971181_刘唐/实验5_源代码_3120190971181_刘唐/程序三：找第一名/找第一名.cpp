#include <iostream>
#include"student_max.h"
using namespace std;

int main()
{
    Student stu[5] =
    {
        Student(19097118111, 75),//����һ�����⣺��int������
        Student(19097118112, 76),//ѧ�žͺ��Ѻܳ���ֵ̫��
        Student(19097118113, 82),//�����´ξ���char�������
        Student(19097118114, 87),
        Student(19097118115, 75)
    };
    max(stu, 5);

    system("pause");
    return 0;

}
