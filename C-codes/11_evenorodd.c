/*

Created by: Mudita Bhowmick
Program to check whether the number is odd or even using if-else.

*/

#include<stdio.h>
int main()
{
    int number;
    printf ("\nEnter a number you want to check:\n");
    scanf ("%d",&number);
    if (number%2==0)
    {
        printf ("The number is even.");
    }
    else
    {
        printf ("The number is odd.");
    }
    return 0;
}