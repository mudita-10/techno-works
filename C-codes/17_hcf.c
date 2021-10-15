/*

Created by: Mudita Bhowmick
Program to calculate the HCF of two numbers.

*/

#include<stdio.h>
int main()
{
   int number1,number2,i,hcf;
   printf("\nEnter two numbers:\n");
   scanf("%d %d",&number1,&number2);
   for(i = 1; i <= number1 || i <= number2; i++)
   {
      if( number1%i == 0 && number2%i == 0 )
      hcf = i;
   }
   printf("HCF will be %d", hcf);
   return 0;
}