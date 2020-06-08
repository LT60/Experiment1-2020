#include <iostream>
using namespace std;
int main()
{
    int n[10] = { 2, 27, 36, 66, 72, 77, 80, 88, 96 };
    int num, i, j;
    for (i = 0, cout << "旧数组： "; i < 9; )
        cout << n[i++] << ' ';
    cout << endl << "输入数值： ";
    cin >> num;
    for (i = 0; i < 9; i++)
    {
        if (num < n[i])
        {
            for (j = 9; j >= i; n[j] = n[j - 1], j--);
            n[i] = num;
            break;
        }
        else if (num > n[8])
        {
            n[9] = num;
            break;
        }
    }
    for (i = 0, cout << "新数组： "; i < 10; )
        cout << n[i++] << ' ';
    cout << endl;
    system("pause");
    return 0;
}
