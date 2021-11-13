/*

Created by: Mudita Bhowmick
Program to insert a number in an array.

*/

#include <stdio.h>
void insertion(int a[100],int size,int element, int index)
{
    for (int i=size-1;i>=index;i--)
    {
        a[i+1] = a[i];
    }
    a[index] = element;
}
int main()
{
    int array[100],n,i,index,number;
    printf ("\nEnter the number of elements:\n");
    scanf ("%d",&n);
    printf ("Enter the numbers:\n");
    for (i=0;i<n;i++)
    {
        scanf ("%d", &array[i]);
    }
    printf ("Enter the number you want to insert:\n");
    scanf ("%d",&number);
    printf ("Enter the index you want to insert the number:\n");
    scanf ("%d",&index);
    insertion(array,n,number,index);
    n = n + 1;
    printf ("The array after insertion:\n");
    for (i=0;i<n;i++)
    {
        printf ("%d ",array[i]);
    }
    return 0;
}
