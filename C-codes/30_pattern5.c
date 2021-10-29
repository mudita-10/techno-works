/*

Created by: Mudita Bhowmick
Program to print the following pattern:
*
***
*****
*******
*********
..n rows

*/
#include <stdio.h>
int main()
{
    int rows,i,j;
    printf ("Enter the number of stars in last row:\n");
    scanf ("%d",&rows);
    for (i=1;i<=rows;i=i+2)
    {
        for (j=1;j<=i;++j)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}