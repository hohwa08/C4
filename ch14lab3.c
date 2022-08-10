//ch14lab3.c

#include <stdio.h>

int main()
{
    int res = 1;
    int n, r, i;

    printf("정수의 값을 입력하세요: ");
    scanf("%d", &n);
    printf("거듭제곱횟수를 입력하세요: ");
    scanf("%d", &r);

    for(i = 0; i < r; i++)
    {
        res  = res * n;
    }
    printf("%d의 %d승은 %d입니다", n, r, res);

    return 0;
}
