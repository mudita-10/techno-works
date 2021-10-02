/*

Created by: Mudita Bhowmick
Program to Swap two numbers using a third variable.

*/

#include <stdio.h>
int main()
{
    int number1,number2,number;
    printf ("\nEnter two numbers:\n");
    scanf("%d%d",&number1,&number2);
    printf("The numbers before swapping are:\n");
    printf("First number is %d \nSecond number is %d\n",number1,number2);
    number=number1;
    number1=number2;
    number2=number;
    printf("The numbers after swapping are:\n");
    printf("First number is %d \nSecond number is %d\n",number1,number2);
    return 0;
}