//ch17ex1.c
//���� �迭 ���� �� �Է¹ޱ�
#include <stdio.h>

int main()
{
    int i;
    int n[5];
    int s = 0;

    //���� �Է� �ޱ�
    for(i = 0; i< 5; i++)
    {

    printf("%d��° ������ �Է��ϼ���: ", i + 1);
    scanf("%d", &n[i]);

    }
    printf("--------------------\n");
    //�Է¹��� ���� ����ϱ�
    for(i = 0; i< 5; i++)
    {
        printf("%d��° ����: %d\n", i+1, n[i]);
    }
    //3��° ���� ����ϱ�
    printf("3��° ������ %d�Դϴ�.\n", n[2]);
    //n�迭�� �� ���ϱ�
    for(i = 0; i< 5; i++)
    {
        s = s + n[i];
    }
        printf("n�迭�� ���� %d�Դϴ�.\n", s);


    return 0;
}
