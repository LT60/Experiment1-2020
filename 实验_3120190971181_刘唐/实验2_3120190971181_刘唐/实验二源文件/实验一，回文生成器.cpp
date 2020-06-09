//给一个字符串 S, 你可以通过在前面添加字符将其转换为回文串.找到并返回用这种方式转换的最短回文串.😄
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int 回文判断函数(char a[100])
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		if (a[i] == '\0')
		{
			break;
		}
	}
	for (int j = 0; j <= i / 2; j++)
	{
		if (a[j] == a[i - 1])
		{
			i--;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}
int main()
{
	char a[50] = { 0 }, b[100] = { 0 }, c[50] = { 0 }, d[100] = { 0 }, p = 0;
	printf("给一个字符串 S, 通过在前面添加字符将其转换为回文串.找到并返回用这种方式转换的最短回文串.\n");
	scanf_s("%s", a, 50);			//原谅我用格式化输入/捂脸
	int i = 0;
	for (i = 0; i <= 50; i++)		//下标对齐
	{
		if (a[i] == '\0')
		{
			i -= 1;
			break;
		}
	}
	for (int n = 0;i>=0 ;i-- ,n++)
	{
		strcpy_s(c, 50, a);
		strcpy_s(d, 100, b);		//c可能有点多余了，但是懒得再改了
		strcat_s(d, 100, c);
		if (回文判断函数(d) != 0)
		{
			b[n] = a[i];
		}
		else if(回文判断函数(d) == 0)
		{
			strcat_s(b, 100, a);
			printf("%s", b);
			break;
		}
	}
	printf("\n");
	system("pause");
	return 0;
}