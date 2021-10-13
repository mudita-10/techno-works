/*

Created by: Mudita Bhowmick
Program to calculate Factorial of a number.

*/

#include <stdio.h>
int main()
 {
    int number,i,factorial=1;
    printf("\nEnter an integer:\n");
    scanf("%d",&number);
    for (i =1;i<=number;++i)
    {
        factorial=factorial*i;
    }
    printf("Factorial of %d will be %d.", number, factorial);
    return 0;
}