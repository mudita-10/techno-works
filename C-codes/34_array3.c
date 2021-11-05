/*

Created by: Mudita Bhowmick
Program to search the position of a number and also how many times the number is present in an array.

*/

#include <stdio.h>
int main()
{
    int i,n,number[100],n1,count=0;
    printf ("\nEnter the number of elements:\n");
    scanf ("%d",&n);
    printf ("Enter the numbers:\n");
    for (i=0;i<n;i++)
    scanf ("%d",&number[i]);
    printf ("Enter the number to search:\n");
    scanf ("%d",&n1);
    for(i=0;i<n;i++)
    {
        if(number[i]==n1)
        {
            printf ("Number is present in position no %d\n",i+1);
            count++;
        }
    }
    printf ("The number was present %d times",count);
    return 0;
}