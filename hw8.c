#include <stdio.h>

int convCase(int ch)
{
    // 모든 문자의 대소문자간 차의 크기는 같다.
    const int diff = 'a' - 'A';
    if(ch >= 'A' && ch <= 'Z')
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')
        return ch - diff;
    else
        return ch;
}

int main()
{
    int ch;
    printf("문자 입력: ");
    while(1)
    {
        ch = getchar();
        if(ch == EOF)
            break;
        ch = convCase(ch);
        putchar(ch);
    }
    return 0;
}