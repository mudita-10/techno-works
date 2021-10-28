/*

Created by: Mudita Bhowmick
Program to print the following pattern:
1
22
333
4444
55555
.. n rows

*/

#include <stdio.h>
int main()
{
   int i,j,rows;
   printf("\nEnter number of rows :\n");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	   for(j=1;j<=i;j++)
      {
         printf("%d",i);
      }
	printf("\n");
   }
   return 0;
}