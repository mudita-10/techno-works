/*

Created by: Mudita Bhowmick
Program to make a calculator using switch-case.

*/

#include <stdio.h>
int main()
{
    int number1,number2,choice,result;
    printf ("\nCalculator\n");
    printf ("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for remainder\n");
    scanf ("%d",&choice);
    printf ("Enter two numbers.\n");
    scanf ("%d %d",&number1,&number2);
    switch(choice)
    {
        case 1:
        result=number1+number2;
        printf ("The result will be %d",result);
        break;
        case 2:
        result=number1-number2;
        printf ("The result will be %d",result);
        break;
        case 3:
        result=number1*number2;
        printf ("The result will be %d",result);
        break;
        case 4:
        if(number2==0)
        {
            printf ("Cannot divide by 0.\n");
            break;
        }
        result=number1/number2;
        printf ("The result will be %d",result);
        break;
        case 5:
        result=number1%number2;
        printf ("The result will be %d",result);
        break;
        default:
        printf ("Invalid input.");
    }
    return 0;
}