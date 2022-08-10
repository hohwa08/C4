//ch3p3.c
//ÁßÃ¸ for

#include <stdio.h>

int main()
{
    int i, j;


    for(j= 1; j<=3; j++)
    {
        for(i = 1; i <= 5; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for(j = 1; j<=4; j++)
    {
        for(i = 1; i <= 5; i++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    for(j = 1; j<=10; j++)
    {
        for(i = 1; i <= j; i++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }


    return 0;
}
