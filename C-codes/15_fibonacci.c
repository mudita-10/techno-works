/*

Created by: Mudita Bhowmick
Program to create Fibonacci series upto n terms.

*/

#include<stdio.h>
int main() 
{
    int i,n=0,a=0,b=1,s;
    s=a+b;// for calculating the next number
    printf("\nEnter the number of terms:\n");
    scanf("%d", &n);
    printf("The Series: %d %d ",a,b);//printing the first two digits
    for (i = 1; i<n-1; ++i)//running loop                         
    {
        printf("%d ",s);
        a=b;
        b=s;
        s=a+b;
    }
    return 0;
}