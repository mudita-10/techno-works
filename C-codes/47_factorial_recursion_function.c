/*

Created by: Mudita Bhowmick
Program to find the factorial of a number using function and recursion.

*/

#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    return(1);
    return(n*factorial(n-1));
}
int main()
{
    int x,number;
    printf("\nEnter the Number:\n");
    scanf("%d",&number);
    x=factorial(number);
    printf("%d! is %d\n",number,x);
    return 0;
}