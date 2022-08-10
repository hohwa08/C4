//ch14lab1.c

#include <stdio.h>

int main()
{
    int i;
    int s = 0;
    int n1, n2;


    for(i = 1; i <= 500; i++)
    {
        if(i%3 == 0||i%5 == 0)
        {
            s = s + i;

        }
    }
        printf("гу╟Х: %d", s);
    return 0;
}
