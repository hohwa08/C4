//ch14ex1.c
//5�� ����(1~100)�� �Է¹޾� �ִ�, �ּҰ� ã��
#include <stdio.h>

int main()
{
    int i;
    int max, min;
    int num;

    max = 0;
    min = 101;

    for(i = 0; i< 5; i++)
    {
        printf("%d. ����(1~100)�� �Է��ϼ���: ", i + 1);
        scanf("%d", &num);

        if(num> max) max = num;
        if(num< min) min = num;

    }
    printf("max: %d, min: %d\n", max, min);


    return 0;
}
