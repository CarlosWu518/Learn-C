#include<stdio.h>
#include<math.h>
int main (void)
{
    // 把三个系数保存到计算机中
    int a = 1;
    int b = 4;
    int c = 0;
    double delta;
    double x1;
    double x2;
    delta = b*b - 4*a*c;
    if (delta > 0)
    {
        x1 = (-b+sqrt(delta))/2*a;
        x2 = (-b-sqrt(delta))/2*a;
        printf("该一元二次方程组有两个解，x1 = %f x2 = %f",x1,x2);
    }
    else if (delta == 0 )
    {
           x1 = (-b+sqrt(delta))/2*a;
           x2 = x1;
            printf("该一元二次方程组有一个解，x1 = %f ",x1,x2);
    }
    else if (delta < 0)
    {
        printf("无解");
    }
    
}