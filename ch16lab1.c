//ch16lab1.c

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("���� �ϳ��� �Է��ϼ���: \n");

    ch = getchar();
    if(islower(ch))
    {
        printf("%c�� �ҹ����Դϴ�.\n", ch);
    }
    else if(isupper(ch))
    {

        printf("%c�� �빮���Դϴ�.\n", ch);
    }
    else if(isdigit(ch))
    {
        printf("%c�� �����Դϴ�.", ch);
    }

    putchar(ch);

}
