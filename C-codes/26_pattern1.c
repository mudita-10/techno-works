/*

Created by: Mudita Bhowmick
Program to print the following pattern:
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
..n rows

*/

#include <stdio.h>
int main()
{
    int rows,i,j;
    printf ("\nEnter the number of rows:\n");
    scanf ("%d",&rows);
    for (i=1;i<=rows;++i)
    {
        for (j=1;j<=i;++j)
        {
            printf ("%d ",j);
        }
    printf ("\n");
    }
    return 0;
}