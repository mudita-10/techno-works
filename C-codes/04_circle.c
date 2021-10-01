/*

Created by: Mudita Bhowmick
Program to find Perimeter and Area of a Circle.

*/

#include <stdio.h>
int main()
{
    float radius,perimeter,area;
    printf ("\nEnter the radius of a circle:\n");
    scanf ("%f",&radius);
    perimeter = 2*3.14*radius; //using the formula to calculate perimeter of a circle
    area = 3.14*radius*radius; //using the formula to calculate area of a circle
    printf ("The perimeter of the circle is %f and the area of the circle is %f",perimeter,area);
    return 0;
}