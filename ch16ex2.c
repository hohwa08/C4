//ch16ex2.c
//������ ����� �ֻ��� ������
#include <stdio.h>
#include <stdlib.h> //����
#include<time.h>

int main()
{
    int dice1, dice2, i;

    srand(time(NULL));

    for(i = 0; i< 10; i++)
    {

        dice1 = rand()%6 + 1;
        dice2 = rand()%6 + 1;
        printf("%02d. �ֻ���: %d, �ֻ���2: %d\n", i +1, dice1, dice2);

    }


    return 0;
}
