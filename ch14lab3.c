//ch14lab3.c

#include <stdio.h>

int main()
{
    int res = 1;
    int n, r, i;

    printf("������ ���� �Է��ϼ���: ");
    scanf("%d", &n);
    printf("�ŵ�����Ƚ���� �Է��ϼ���: ");
    scanf("%d", &r);

    for(i = 0; i < r; i++)
    {
        res  = res * n;
    }
    printf("%d�� %d���� %d�Դϴ�", n, r, res);

    return 0;
}
