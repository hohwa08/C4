//ch14ex2.c
//������ �����

#include <stdio.h>

int main()
{
    int dan, time;
    int i;

    dan = 2;
    for(i = 1; i<=9; i++)
    {
        printf("%d * %d = %d\n", dan, i, dan*i);
    }


    printf("�� ��: ");
    scanf("%d", time);

    for(i = 1; i<=9; i++)
    {
        printf("%d * %d = %d\n", time, i, time*i);
    }

    return 0;
}
