/*

Created by: Mudita Bhowmick
Program to print the average of numbers using array.

*/

#include <stdio.h>
int main()
{
    int n,i;
    float number[100],sum=0.0,average;
    printf("\nEnter the number of elements:\n");
    scanf("%d",&n);
    printf ("Enter the numbers:\n");
    for (i=0;i<n;++i)
    {
        scanf("%f",&number[i]);
        sum=sum+number[i];
    }
    average=sum/n;
    printf("Average will be %f",average);
    return 0;
}