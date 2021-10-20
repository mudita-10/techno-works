/*

Created by: Mudita Bhowmick
Program to print whether the number entered by the user is palindromic or not.

*/

#include <stdio.h>
int main() 
{
    int number,actualNumber,newNumber=0,digit;
    printf("\nEnter a number to check:\n");
    scanf("%d",&number);
    actualNumber=number;
    while (number!= 0) 
    {
        digit=number%10;
        newNumber=newNumber*10+digit;
        number=number/10;
    }
    if (actualNumber==newNumber)
    {
        printf("The number is palindromic.");
    }
    else
    {
        printf("The number is not palindromic.");
    }
    return 0;
}