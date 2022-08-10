//ch16ex2.c
//난수를 사용한 주사위 굴리기
#include <stdio.h>
#include <stdlib.h> //난수
#include<time.h>

int main()
{
    int dice1, dice2, i;

    srand(time(NULL));

    for(i = 0; i< 10; i++)
    {

        dice1 = rand()%6 + 1;
        dice2 = rand()%6 + 1;
        printf("%02d. 주사위: %d, 주사위2: %d\n", i +1, dice1, dice2);

    }


    return 0;
}
