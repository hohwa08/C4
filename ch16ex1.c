//ch16ex1.c
//대문자로 변경하기

#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    while(1)
    {
        ch = getchar();
        if(ch == EOF) break;

        if(islower(ch))
        {
            ch = toupper(ch);
        }
        putchar(ch);
    }
    return 0;
}
