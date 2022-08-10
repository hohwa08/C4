//ch15p1.c
//break ¿¹Á¦

#include <stdio.h>

int main()
{
    int i;
    for(i = 1; i< 11; i++)
    {
        if (i==6) break;
        printf("%d ", i);
    }
    printf("\n");

    for(i = 1; i< 11; i++)
    {
        if (i==6) continue;
        printf("%d ", i);
    }
    return 0;
}
