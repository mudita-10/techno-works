/*

Created by: Mudita Bhowmick
Program to print the square of natural numbers upto the number of terms given by the user and also print the sum.

*/

#include <stdio.h>
int main()
{
   int i,number,sum=0,square=1;
   printf("\nEnter the number of terms:\n");
   scanf("%d",&number);
   printf("The square natural numbers upto %d terms are :\n",number);
   for(i=1;i<=number;i++)
   {
       square=i*i;
       printf("%d ",square);
       sum=sum+square;
   }
   printf("\nThe sum of square natural number upto %d terms = %d",number,sum);
   return 0;
}