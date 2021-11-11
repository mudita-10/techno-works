/*

Created by: Mudita Bhowmick
Program to search a number in a sorted array using binary search.

*/

#include <stdio.h>
int main()
{
    int array[100],n,i,number,minimum,maximum,middle,position = 0;
    printf ("\nEnter the number of elements:\n");
    scanf ("%d",&n);
    printf ("Enter the numbers in a sorted order:\n");
    for (i=0; i<n; i++)
    {
        scanf ("%d", &array[i]);
    }
    printf ("Enter the number you want to search:\n");
    scanf ("%d", &number);
    minimum=0;
    maximum=n-1;
    while (minimum<=maximum)
    {
        middle= (minimum + maximum)/2;
        if (array[middle]==number)
        {
            position = middle + 1;
            break;
        }
        else if (array[middle]>minimum)
        {
            minimum = middle + 1;
        }
        else 
        {
            maximum = middle - 1;
        }
    }
    if (position!= 0)
    {
        printf ("The number is present in position %d\n",position);
    }
    else
    {
        printf ("The number is not present in the array.\n");
    }
    return 0;
}
