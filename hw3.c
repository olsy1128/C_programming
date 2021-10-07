#include <stdio.h>

int main()
{
    int num = 0, count = 0, i = 0;

    printf("Please enter a prime number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
       if(num % i == 0)
           count++;    
    }

    if(count == 0)
        printf("It is a prime number \n");
    else
        printf("It is not a prime number \n");

    return 0;
}