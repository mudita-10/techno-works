/*

Created by: Mudita Bhowmick
Program to print the following pattern:
1 
2 3 
4 5 6 
7 8 9 10
11 12 13 14 15
..n rows

*/

#include <stdio.h>
int main()
{
    int rows,i,j,c=1;
    printf ("\nEnter the number of rows:\n");
    scanf ("%d",&rows);
    for (i=1;i<=rows;++i)
    {
        for (j=1;j<=i;++j)
        {
            printf ("%d ",c);
            c++;
        }
    printf ("\n");
    }
    return 0;
}