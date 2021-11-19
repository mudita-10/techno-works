/*

Created by: Mudita Bhowmick
Program to find the greatest common divisor of the two numbers using function.

*/

#include<stdio.h>
int greatestCommonDivisor(int a, int b)
{
  int h;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      h = i;
    }
  }
  return h;
}
int main()
{
  int number1, number2;
  printf("\nEnter two numbers:\n");
  scanf("%d %d",&number1, &number2);
  int gcd = greatestCommonDivisor(number1, number2);
  printf("The GCD is %d", gcd);
  return 0;
}