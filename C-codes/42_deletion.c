/*

Created by: Mudita Bhowmick
Program to delete a number in an array.

*/

#include <stdio.h>
void deletion(int a[100],int size, int index)
{
    for (int i=index;i<size-1;i++)
    {
        a[i] = a[i+1];
    }
}
int main()
{
    int array[100],n,i,index;
    printf ("\nEnter the number of elements:\n");
    scanf ("%d",&n);
    printf ("Enter the numbers:\n");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &array[i]);
    }
    printf ("Enter the index you want to delete the number:\n");
    scanf ("%d",&index);
    deletion(array,n,index);
    n = n - 1;
    printf ("The array after deletion:\n");
    for (i=0;i<n;i++)
    {
        printf ("%d ",array[i]);
    }
    return 0;
}
