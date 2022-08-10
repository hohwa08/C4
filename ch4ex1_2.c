//ch4ex1_2.c
#include <stdio.h>

int main()
{
    int i, j;
    int n1, n2;
    int max = 0;
    int num;

    for(i = 1; i<=99; i++)
    {
        j = 100 - i;
        num = i*j;
        if(num > max)
        {max = num;
         n1 = i;
         n2 = j;
        }
    }
    printf("%d * %d, max: %d\n",n1, n2, max);

    return 0;
}
