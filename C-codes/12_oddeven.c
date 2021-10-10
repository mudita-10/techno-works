/*

Created by: Mudita Bhowmick
Program to check whether the number is odd or even using switch-case.

*/

#include <stdio.h>
int main()
{
    int number,choice;
    printf ("\nEnter a number you want to check.\n");
    scanf ("%d",&number);
    choice=number%2;
    switch (choice)
    {
        case 0:
        printf ("The number is even.");
        break;
        case 1:
        printf ("The number is odd.");
    }
    return 0;
}