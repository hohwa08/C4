//ch15ex3.c
//1~100�� ���ϱ�

#include <stdio.h>

int main()
{
    int i;
    int s = 0;

    while(1)//1: True, 0: False
    {
        i++;
        s = s + i;
        if(s> 100)
        {
            printf("i: %d\n", i);
            break;
        }

    }
    printf("��: %d\n", s);

    return 0;
}
