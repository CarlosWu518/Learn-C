#include <stdio.h>
int main(void)
{
    int a, b, c;
    int t;
    printf("请输入三个整数（中间以空格好分隔）");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    if (a < c)
    {
        t = a;
        a = c;
        c = t;
    }
    if (b < c)
    {
        t = b;
        b = c;
        c = t;
    }
    printf("%d %d %d\n", a, b, c);
}