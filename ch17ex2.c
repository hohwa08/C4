//ch17ex2.c
//배열 예제
#include <stdio.h>

int main()
{
    int i;
    float avg;
    int c = 0;
    int s = 0;
    int score[5] = {50, 60, 70, 80, 90};//5명의 성적

    //80점 이상의 학생 수 구하기
    for(i = 0; i< 5; i++)
    {
        if(score[i] >= 80)
        {
            c += 1;
        }
    }
    printf("80점 이상의 학생 수: %d명\n", c);

    //70점 미만 학생 수 구하기
    c = 0;
    for(i = 0; i< 5; i++)
    {
        if(score[i] < 70)
        {
            c += 1;
        }
    }
    printf("70점 미만의 학생 수: %d명\n", c);
    for(i = 0; i< 5; i++)
    {
        s+=score[i];
    }
    avg = (float)s / 5; //avg = s/5.0;
    printf("점수의 합계: %d, 평균: %.1f\n", s, avg);

    return 0;
}
