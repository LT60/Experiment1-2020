#include <iostream>
using namespace std;

class Student
{
public:
    Student(int n, float s) : id(n), score(s) {}//学生类
    int id = 0;
    float score = 0;
};

void max(Student* A, int n);//对象指针

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
    cout << "NO.1 学生的信息: \n" <<"ID："<< ma.id << endl << "分数："<<ma.score << endl;
}
