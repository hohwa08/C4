//ch14ex1.c
//5개 정수(1~100)를 입력받아 최대, 최소값 찾기
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
        printf("%d. 정수(1~100)를 입력하세요: ", i + 1);
        scanf("%d", &num);

        if(num> max) max = num;
        if(num< min) min = num;

    }
    printf("max: %d, min: %d\n", max, min);


    return 0;
}
