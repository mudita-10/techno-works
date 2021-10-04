/*

Created by: Mudita Bhowmick
Program to calculate the sum of digits of a number.

*/

#include <stdio.h>
int main()
{
    int number,lastDigit,sumOfDigits=0;
    printf("\nEnter a number:\n");
    scanf("%d",&number);
    while(number>0)
    {
        lastDigit=number%10;//Extracting the last digit from the number provided.
        sumOfDigits=sumOfDigits+lastDigit;//Adding the extracted digit.
        number=number/10;//Removing the last digit so that we can extract another digit.
    }
    printf("The sum of the digits of the number provided will be %d",sumOfDigits);
    return 0;
}