#include <iostream>
using namespace std;

class Student
{
public:
    Student(int n, float s) : id(n), score(s) {}//ѧ����
    int id = 0;
    float score = 0;
};

void max(Student* A, int n);//����ָ��

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
    cout << "NO.1 ѧ������Ϣ: \n" <<"ID��"<< ma.id << endl << "������"<<ma.score << endl;
}
