//ch14lab2.c

#include <stdio.h>

int main()
{
    int a, b, i, s;

    printf("정수 2개를 입력하세요(작은수 큰수 순서로): ");
    scanf("%d %d", &a, &b);

    printf("홀수들: ");
    for(i = a; i <= b; i ++)
    {
        if(i %2 == 1)
        {
            printf("%d ", i);
        }
    }
}
