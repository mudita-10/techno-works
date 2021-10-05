/*

Created by: Mudita Bhowmick
Program to reverse a number given by the user.

*/

#include <stdio.h>
int main()
{
    int number,lastDigit,reversedNumber=0;
    printf("\nEnter a five digit number:\n");
    scanf("%d",&number);
    while(number>0)
    {
        lastDigit=number%10;//extracting the last digit
        reversedNumber=reversedNumber*10+lastDigit;//reversing the number
        number=number/10;//removing the last digit
    }
    printf("The reverse number will be %d",reversedNumber);
    return 0;
}