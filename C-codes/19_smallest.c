/*

Created by: Mudita Bhowmick
Program to find the smallest number from three numbers.

*/

#include <stdio.h>
int main()
{
    int number1,number2,number3;
    printf ("\nEnter three numbers:\n");
    scanf ("%d%d%d",&number1,&number2,&number3);
    if(number1<number2 && number1<number3)
    {
        printf("Smallest number is %d",number1);
    }
    else if(number2<number3 && number2<number1)
    {
        printf("Smallest number is %d",number2);
    }
    else
    {
        printf("Smallest number is %d",number3);
    }   
    return 0;
}