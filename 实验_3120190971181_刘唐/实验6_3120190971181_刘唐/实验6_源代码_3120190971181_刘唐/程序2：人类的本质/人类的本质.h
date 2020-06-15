#include <iostream>
using namespace std;

class Chinese//人类
{  
public:
    virtual void greet() 
    {
        cout << "你好" << endl;
    }
};

class EnglishLearner : public Chinese    //英语学生类
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};

class Repeater : public Chinese    //复读机类
{
public:
    void greet()
    {
        Chinese::greet();
    }
};