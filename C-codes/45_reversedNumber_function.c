/*

Created by: Mudita Bhowmick
Program to find the reversed number using function.

*/

#include <stdio.h>
int reversDigits(int n)
{
    int reversedNumber = 0;
    while(n > 0)
    {
        reversedNumber = reversedNumber*10 + n%10;
        n = n/10;
    }
    return reversedNumber;
}
int main()
{
    int number;
    printf("\nEnter a number:\n"); 
    scanf("%d",&number);
    printf( "Reversed number is %d", reversDigits(number));
    return 0;
}