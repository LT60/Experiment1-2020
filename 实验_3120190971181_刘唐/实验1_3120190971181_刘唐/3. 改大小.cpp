#include <iostream>
using namespace std;
int main()
{
    while(1)//������Ϊ�˰Ѷ��������������ʾ��һ��������
    {
        char c;
        cout << "��������ĸ��";
        cin >> c;
        if (c >= 'a' && c <= 'z')
            c -= 32;
        else if (c >= 'A' && c <= 'Z')
            c += 32;
        cout << c << endl;
    }
}