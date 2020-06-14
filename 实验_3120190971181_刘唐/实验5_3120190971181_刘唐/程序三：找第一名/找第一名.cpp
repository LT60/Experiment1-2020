#include <iostream>
#include"student_max.h"
using namespace std;

int main()
{
    Student stu[5] =
    {
        Student(19097118111, 75),//发现一个问题：用int做类型
        Student(19097118112, 76),//学号就很难很长（值太大）
        Student(19097118113, 82),//所以下次就用char型数组吧
        Student(19097118114, 87),
        Student(19097118115, 75)
    };
    max(stu, 5);

    system("pause");
    return 0;

}
