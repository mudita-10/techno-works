/*

Created by: Mudita Bhowmick
Program to find the Average of Five numbers.

*/

#include <stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    float average;
    printf("\nEnter 5 numbers:\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    average = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf("The average of 5 numbers: %f", average);
    return 0;
}