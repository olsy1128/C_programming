#include <stdio.h>

int even(int arr)
{
    if (arr % 2 == 0)
        printf("%d ", arr);
    return 0;
}

int odd(int arr)
{
    if (arr % 2 == 1)
        printf("%d ", arr);
    return 0;
}

int main()
{
    int arr[5];
    int i = 0;

    printf("5개의 정수 입력: ");
    
    while (i < 5)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("\n");

    printf("홀수 출력: ");
    for (i = 0; i < 5; i++)
    {
        odd(arr[i]);    
    }

    printf("\n");

    printf("짝수 출력: ");
    for (i = 0; i < 5; i++)
    {
        even(arr[i]);
    }
    
    printf("\n");

    return 0;
}