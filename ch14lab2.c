//ch14lab2.c

#include <stdio.h>

int main()
{
    int a, b, i, s;

    printf("���� 2���� �Է��ϼ���(������ ū�� ������): ");
    scanf("%d %d", &a, &b);

    printf("Ȧ����: ");
    for(i = a; i <= b; i ++)
    {
        if(i %2 == 1)
        {
            printf("%d ", i);
        }
    }
}
