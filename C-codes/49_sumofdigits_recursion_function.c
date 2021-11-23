/*

Created by: Mudita Bhowmick
Program to find the sum of the numbers using function and recursion.

*/

#include <stdio.h>
int sumOfDigits(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + sumOfDigits(n / 10));
}
int main()
{
    int number;
    printf ("\nEnter a number:\n");
    scanf ("%d",&number);
    int sum = sumOfDigits(number);
    printf("Sum of digits will be %d\n",sum);
    return 0;
}