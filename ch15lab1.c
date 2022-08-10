//ch15lab1.c

#include <stdio.h>

int main()
{
    int num, n, i;
    int res = 1;

    printf("입력의 개수: ");
    scanf("%d", &n);

    printf("\n");
    for(i = 1; i<= n; i++)
    {
        printf("%d번째 수: ",i);
        scanf("%d", &num);

        if(num == 0) continue;
        if(num < 0) break;

        res = res * num;
    }

    printf("계산값: %d\n", res);
    return 0;

}
