/*

Created by: Mudita Bhowmick
Program to find the fibonacci series upto n number using function.

*/

#include<stdio.h>    
void fibonacci(int n)    
{    
    int n1=0,n2=1,n3,i;     
    printf("\n%d %d",n1,n2);    
    for(i=2;i<n;i++)   
    {    
        n3=n1+n2;    
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }  
} 
int main()
{
    int number;
    printf("\nEnter the number of terms:\n");   
    scanf("%d",&number);
    fibonacci(number);
}