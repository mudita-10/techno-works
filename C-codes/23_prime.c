/*

Created by: Mudita Bhowmick
Program to print whether the number entered by the user is prime or not.

*/

#include <stdio.h>
int main()
{
  int number, i, f = 0;
  printf("\nEnter an integer:\n");
  scanf("%d", &number);
  for (i = 2; i <= number / 2; ++i)
  {
    if (number % i == 0)
    {
      f = 1;
      break;
    }
  }
  if (number == 1)
  {
    printf("1 is neither prime nor composite.");
  }
  else
  {
    if (f == 0)
    {
      printf("%d is a prime number.", number);
    }  
    else
    {
      printf("%d is not a prime number.", number);
    }
  }
  return 0;
}