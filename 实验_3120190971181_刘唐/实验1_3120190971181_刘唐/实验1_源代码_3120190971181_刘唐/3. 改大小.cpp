#include <iostream>
using namespace std;
int main()
{
    while(1)//依旧是为了把多次输入输出结果显示在一个窗口内
    {
        char c;
        cout << "请输入字母：";
        cin >> c;
        if (c >= 'a' && c <= 'z')
            c -= 32;
        else if (c >= 'A' && c <= 'Z')
            c += 32;
        cout << c << endl;
    }
}