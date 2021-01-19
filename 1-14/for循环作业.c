#include <stdio.h>
int main(void)
{
    int num1 = 0;
    int num2 = 0;
    int count = 0;
    int avg = 0;
    for (int i = 0; i <= 100; i++)
    {
        //奇数之和
        if (i % 2 != 0)
        {
            count++;
            num1 += i;
        }
        else if (i % 2 == 0)
        {
            num2 += i;
        }
    }
    printf("奇数和= %d\n", num1);
    printf("奇数个数= %d\n", count);
    printf("奇数平均值= %d\n", num1 / count);
    printf("偶数和= %d\n", num2);
}