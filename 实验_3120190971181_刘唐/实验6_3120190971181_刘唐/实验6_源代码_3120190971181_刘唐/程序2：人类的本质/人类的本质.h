#include <iostream>
using namespace std;

class Chinese//����
{  
public:
    virtual void greet() 
    {
        cout << "���" << endl;
    }
};

class EnglishLearner : public Chinese    //Ӣ��ѧ����
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};

class Repeater : public Chinese    //��������
{
public:
    void greet()
    {
        Chinese::greet();
    }
};