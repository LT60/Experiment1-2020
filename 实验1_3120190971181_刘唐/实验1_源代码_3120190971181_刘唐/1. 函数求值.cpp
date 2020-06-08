#include<iostream>
#include<cstdlib>//其实vs2019可以自动暂停，系统暂停似乎没用（熟悉开发环境）
using namespace std;
int main()
{
	float x = 0;
	while (1)//一个窗口，搞定所有！
	{
		cout << "输入七个数值：";//此处定义七个数字是为了方便一次检验多个数！
		for (int i = 0; i < 7; i++)
		{
			bool a=scanf_s("%f",&x);//检验输入//熟悉编译环境：C++兼容C，所以在这里故意使用c语言风格输入。编译通过
			if (a == 1)
			{
				if (x < 1)// 选择结构 输出y的值
				{
					cout << x << "\t";
				}
				else if (x >= 1 && x < 10)
				{
					cout << 2 * x - 1 << "\t";
				}
				else if (x >= 10)
				{
					cout << 3 * x - 11 << "\t";
				}
				else cout << "error！";
			}
			else cout << "输入有误，请重新输入！";

		}
		cout << "\n\n";//分隔两组测试数据
		system("pause");
	}
	return 0;//其实vs2019或者说c++可以自动加上【return 0；】这里可以不写（熟悉编译环境）
}