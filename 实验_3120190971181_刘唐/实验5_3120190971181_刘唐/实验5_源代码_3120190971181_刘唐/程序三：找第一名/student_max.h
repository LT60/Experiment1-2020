class Student
{
public:
    Student(int n, float s) : id(n), score(s) {}//学生类
    int id = 0;
    float score = 0;
};

void max(Student* A, int n);//对象指针
