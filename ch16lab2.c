//ch16lab2.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int ran, i;
    srand(time(NULL));

    printf("���� ���: ");
    for(i = 0; i< 10; i++)
    {

        //ran = rand()%100 + 1;
        ran = rand() % 51 + 50;

        printf("%d ", ran);

    }
}
