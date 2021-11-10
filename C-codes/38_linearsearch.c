/*

Created by: Mudita Bhowmick
Program to search a number in an array using linear search.

*/

#include <stdio.h>
int main()
{
    int array[100], n, i, number, position;
    printf("\nEnter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to search:\n");
    scanf("%d", &number);
    for (i = 0; i < n; i++)
        if (array[i] == number)
        {
            position = i + 1;
            break;
        }
        else
        {
            position = 0;
        }
    if (position != 0)
    {
        printf("The number is present in the array and in position no. %d\n", i + 1);
    }
    else
    {
        printf("The number you are searching is not present in the array.\n");
    }
    return 0;
}
