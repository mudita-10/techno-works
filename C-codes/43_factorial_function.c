/*

Created by: Mudita Bhowmick
Program to find the factorial of a number using function.

*/

#include <stdio.h>
void factorial(int n)
{
    int i,factorial=1;
    for (i=1;i<=n;i++)
    factorial=factorial*i;
    printf("Factorial of the number will be %d", factorial); 
}
int main()
{
    int number;
    printf("\nEnter a number:\n");
    scanf("%d", &number);
    factorial(number); 
}