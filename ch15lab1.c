//ch15lab1.c

#include <stdio.h>

int main()
{
    int num, n, i;
    int res = 1;

    printf("�Է��� ����: ");
    scanf("%d", &n);

    printf("\n");
    for(i = 1; i<= n; i++)
    {
        printf("%d��° ��: ",i);
        scanf("%d", &num);

        if(num == 0) continue;
        if(num < 0) break;

        res = res * num;
    }

    printf("��갪: %d\n", res);
    return 0;

}
