//ch17ex2.c
//�迭 ����
#include <stdio.h>

int main()
{
    int i;
    float avg;
    int c = 0;
    int s = 0;
    int score[5] = {50, 60, 70, 80, 90};//5���� ����

    //80�� �̻��� �л� �� ���ϱ�
    for(i = 0; i< 5; i++)
    {
        if(score[i] >= 80)
        {
            c += 1;
        }
    }
    printf("80�� �̻��� �л� ��: %d��\n", c);

    //70�� �̸� �л� �� ���ϱ�
    c = 0;
    for(i = 0; i< 5; i++)
    {
        if(score[i] < 70)
        {
            c += 1;
        }
    }
    printf("70�� �̸��� �л� ��: %d��\n", c);
    for(i = 0; i< 5; i++)
    {
        s+=score[i];
    }
    avg = (float)s / 5; //avg = s/5.0;
    printf("������ �հ�: %d, ���: %.1f\n", s, avg);

    return 0;
}
