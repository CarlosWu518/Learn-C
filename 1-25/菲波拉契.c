#include <stdio.h>
int main(void)
{
    int n;
    int f1 = 1;
    int f2 = 2;
    int f3;

    printf("亲输入您需要求的序列：");
    scanf("%d", &n);
    if (1 == n)
    {
        /* code */
        f3 = 1;
    }
    else if (2 == n)
    {
        /* code */
        f3 = 2;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            /* code */
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }
    printf("%d\n", f3);
    return 0;
}