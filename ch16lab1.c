//ch16lab1.c

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("문자 하나를 입력하세요: \n");

    ch = getchar();
    if(islower(ch))
    {
        printf("%c는 소문자입니다.\n", ch);
    }
    else if(isupper(ch))
    {

        printf("%c는 대문자입니다.\n", ch);
    }
    else if(isdigit(ch))
    {
        printf("%c는 숫자입니다.", ch);
    }

    putchar(ch);

}
