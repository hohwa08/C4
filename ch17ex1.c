//ch17ex1.c
//정수 배열 생성 후 입력받기
#include <stdio.h>

int main()
{
    int i;
    int n[5];
    int s = 0;

    //정수 입력 받기
    for(i = 0; i< 5; i++)
    {

    printf("%d번째 정수를 입력하세요: ", i + 1);
    scanf("%d", &n[i]);

    }
    printf("--------------------\n");
    //입력받은 정수 출력하기
    for(i = 0; i< 5; i++)
    {
        printf("%d번째 정수: %d\n", i+1, n[i]);
    }
    //3번째 정수 출력하기
    printf("3번째 정수는 %d입니다.\n", n[2]);
    //n배열의 합 구하기
    for(i = 0; i< 5; i++)
    {
        s = s + n[i];
    }
        printf("n배열의 합은 %d입니다.\n", s);


    return 0;
}
