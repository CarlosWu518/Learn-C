# include <stdio.h>
int main (void)
{
    float score;
    printf("��������ĳɼ���");
    scanf("%f", &score);
    if (score > 100)
    {
        printf("��������\n");
    }else if (score >= 90 && score <= 100)
    {
        printf("���� \n");
    }else if (score >= 80 && score < 90)
    {
        printf("���� \n");
    }else if (score >= 60 && score < 80)
    {
        printf("���� \n");
    }else if (score >= 0 && score < 60)
    {
         printf("������ \n");
    }else
    {
        printf("����������ͣ���Ҫ����Ա� \n");
    }
    return 0;

}