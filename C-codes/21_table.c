/*

Created by: Mudita Bhowmick
Program to print the multiplication table of a number entered by the user.

*/

#include <stdio.h>
int main()
{
    int number,i,table;
    printf ("\nEnter the number you want multiplication table of:\n");
    scanf ("%d",&number);
    printf ("Multiplication Table of %d: \n",number);
    for (i=1;i<=10;i++)
    {
        table=i*number;
        printf ("%d * %d = %d\n",number,i,table);
    }
    return 0;
}