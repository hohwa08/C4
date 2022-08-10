//ch17p1.c
//배열 초기화

#include <stdio.h>

int main()
{
    int i;
    char str[5] = {'P', 'I', 'T', 'C', 'A'};

    int arr1[5] = {10, 7, 6, 20, 5};
    int arr2[5] = {3, 5, 99, 88, 1};
    int arr3[5];

    float farr[3] = {0.14, 1.14, 3.14};

    for(i = 0; i < 5; i++)
    {
        printf("arr1[%d]: %2d, ", i, arr1[i]);
        printf("arr2[%d]: %2d, ", i, arr2[i]);
        printf("arr3[%d]: %2d\n", i, arr3[i]);
    }

    printf("farr[0]: %.2f, ", farr[0]);
    printf("farr[1]: %.2f, ", farr[1]);
    printf("farr[2]: %.2f\n ", farr[2]);


    for(i = 0; i< 5; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
