/*

Created by: Mudita Bhowmick
Program to check if the year is leap year or not.

*/

#include <stdio.h>
int main()
{
    int year;
    printf ("\nEnter the year:\n");
    scanf ("%d",&year);
    if (year%400==0)
    {
        printf ("It is a leap year.\n");
    }
    else if (year%100==0)
    {
        printf ("It is a leap year.\n");
    }
    else if (year%4==0)
    {
        printf ("It is a leap year.\n");
    }
    else
    {
        printf ("It is not a leap year.\n");
    }
    return 0;
}