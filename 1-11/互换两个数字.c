#include <stdio.h>
int main(void)
{
    int i = 3;
    int j = 4;
    int count = 0;
    count = i;
    i = j;
    j = count;
    printf("i = %d , j = %d \n", i, j);
    return 0;
}