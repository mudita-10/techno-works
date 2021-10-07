/*

Created by: Mudita Bhowmick
Program to add the first and last digit of a four digit number.

*/

#include<stdio.h>
int main()
{
    int number,sum;
    printf ("\nEnter the four digit number:\n");
    scanf ("%d",&number);
    sum=(number%10)+(number/1000);//Extracting the last digit and first digit and adding them.
    printf ("The sum of first and last digit of a four digit number is %d",sum);
    return 0;
}