//ch15ex1.c
//1~20 Â¦¼ö Ãâ·Â

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i < 20; i++)
    {
        if(i%2 == 1)
        {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n------------------------------\n");
    for(i = 1; i<5; i++)
    {
        for(j = 1; j< 5; j++)
        {
            if(j == 4) break;
            printf("%d ", j);
        }
    }
    return 0;
}
