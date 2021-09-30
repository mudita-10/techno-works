/*

Created by: Mudita Bhowmick
Program to covert temperature in Fahrenheit to degree Celsius.

*/

#include <stdio.h>
int main()
{
    float f,c;//f for storing temperature in Fahrenheit, c for calculating temperature in degree Celsius
    printf ("\nEnter temperature in Fahrenheit :\n");
    scanf ("%f",&f);
    c=(((f-32.0)/9.0)*5.0);//using the formula for temperature conversion
    printf ("The temperature in degree Celsius will be %f",c);
    return 0;
}