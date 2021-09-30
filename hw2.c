#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float kilometers, mile;
	printf("Please enter kilometers: ");
	scanf("%f", &kilometers);
	mile = kilometers / 1.609;
	printf("%.1f km is equal to %.1f miles.", kilometers, mile);
}