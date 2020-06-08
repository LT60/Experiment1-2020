#include<stdio.h>
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 }, x, min = 1, mid = 4, max = 9;
	 
        scanf_s("%d", &x);
		for (;;)
		{
			if (a[mid] > x)
			{
				max = mid - 1; mid = (min + max) / 2;
			}
			else if (a[mid] < x)
			{
				min = mid + 1; mid = (min + max) / 2;
			}
			if (x == a[mid]) { printf("a[%d]=%d\n", mid, x); break; }
			else if ((max - min == 1) & (mid != x)){printf("未查找到该数据！\n"); break;}
		}
	return 0;
}