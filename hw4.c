#include <stdio.h>

int ToBinary(int num);

int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        ToBinary(num);
    else
        printf("0");
    
    return 0;
}

int ToBinary(int num)
{
    if (num > 0)
    {
        ToBinary(num / 2);
        printf("%d", num % 2);
    }
}