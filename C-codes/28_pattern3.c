/*

Created by: Mudita Bhowmick
Program to print the following pattern:
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2
1
.. n rows

*/

#include <stdio.h>
int main()
{
   int i,j,rows;
   printf("\nEnter the number of rows:\n");
   scanf("%d",&rows);
   for (i=rows;i>=1;--i)
   {
      for (j = 1; j <= i; ++j)
      {
        printf("%d ",j);
      }
      printf("\n");
   }
   return 0;
}
