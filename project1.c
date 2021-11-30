#include <stdio.h>

int main()
{
    float min_rate = 0, max_rate = 0, rate = 0;
    float period = 0, present_index = 0, future_index = 0;
    float increase, decrease;
    
    printf("현재 KOSPI200 지수: ");
    scanf("%f", &present_index);

    printf("향후 1.5년 내 최고 KOSPI200 지수: ");
    scanf("%f", &max_rate);

    printf("향후 1.5년 내 최저 KOSPI200 지수: ");
    scanf("%f", &min_rate);

    printf("1.5년 후 KOSPI200 지수: ");
    scanf("%f", &future_index);

    printf("예치 기간 (18개월 이하): ");
    scanf("%f", &period);

    if (period < 3)
        printf("예상 이율은 %.2f%%입니다. \n", -1.39);
    else if (period >= 3 && period < 6)
        printf("예상 이율은 %.2f%%입니다. \n", -1.23);
    else if (period >= 6 && period < 9)
        printf("예상 이율은 %.2f%%입니다. \n", -1.11);
    else if (period >= 9 && period < 12)
        printf("예상 이율은 %.2f%%입니다. \n", -0.98);
    else if (period >= 12 && period < 15)
        printf("예상 이율은 %.2f%%입니다. \n", -0.86);
    else if (period >= 15 && period < 18)
        printf("예상 이율은 %.2f%%입니다. \n", -0.73);
    else if (period >= 18)
    {
        increase = (present_index) * 1.15;
        decrease = (present_index) * 0.85;
        if (max_rate > increase || min_rate < decrease)
        {
            printf("예상 이율은 %.2f%%입니다. \n", 1.00);
        }
        else if (future_index > present_index)
        {
            rate = 1 + ((future_index / present_index) * 100 - 100) * 0.41;
            printf("예상 이율은 %.2f%%입니다. \n", rate);
        }
        else if (future_index < present_index)
        {
            rate = 1 + (100 - (future_index / present_index) * 100) * 0.41;
            printf("예상 이율은 %.2f%%입니다. \n", rate);
        }
    }
    return 0;    
}