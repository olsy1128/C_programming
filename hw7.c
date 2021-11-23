#include <math.h>
#include <stdio.h>

float calculateSD(float number[]) 
{
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 5; ++i) 
    {
        sum += number[i];
    }
    mean = sum / 5;
    for (i = 0; i < 5; ++i)
    {
        SD += pow(number[i] - mean, 2);
    }
    return sqrt(SD / 5);
}

int main(void)
{
    int i;
    float number[5];
    printf("Enter 5 real numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &number[i]);
    }
    printf("Standard Deviation = %.3f \n", calculateSD(number));
    return 0;
}
