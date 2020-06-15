#include<iostream>
using namespace std;
int main()
{
    int n;
    char a[40], b[20], * pa = a, * pb = b;
    for (int i = 0; i < 10; i++) //允许程序多次运行
    {
        pa = a, pb = b;//指针复位操作
        cout<<"\n输入两组最大为20个字符的字符串，我将为你将后者连接到前者后面。\n\n第一个字符串：";
        cin >> a;
        cout << "第二个字符串：";
        cin >> b;
        while (*pa != '\0')//pa指针移动至a字符串结束符
            pa++;
        while (*pb != '\0')//赋值
        {
            *pa++ = *pb++;//*pa=*pb;pa++;pb++;
            *pa = '\0';
        }
        cout << "\n合并后字符串：";
        cout << a << endl << endl;
    }
    return 0;
}