/*

Created by: Mudita Bhowmick
Program to find the fibonacci series upto n terms using function and recursion.

*/

#include<stdio.h>    
int printFibonacci(int n)
{    
    static int n1=0,n2=1,n3;    
    if(n>0)
    {    
        n3 = n1 + n2;    
        n1 = n2;    
        n2 = n3;    
        printf("%d ",n3);    
        return printFibonacci(n-1);    
    }    
}    
int main()
{    
    int number;    
    printf("\nEnter the number of elements:\n");    
    scanf("%d",&number);    
    printf("Fibonacci Series:\n");    
    printf("%d %d ",0,1);    
    printFibonacci(number-2);   
  return 0;  
}    