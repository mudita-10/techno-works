/*

Created by: Mudita Bhowmick
Program to sort an array using bubble sort.

*/

#include <stdio.h>
int main()
{
    int array[100],n,i,j,t;
    printf("\nEnter number of elements:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (array[j]>array[j+1])
            {//here we will swap the numbers
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}