/*

Created by: Mudita Bhowmick
Program to find the Area of a Triangle.

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int side1,side2,side3;
    float semiperimeter=0,areaofthetriangle=0;
    printf ("\nEnter the three sides of the triangle:\n");
    scanf ("%d %d %d",&side1,&side2,&side3);
    semiperimeter=(side1+side2+side3)/2.0;
    areaofthetriangle =sqrt(semiperimeter*(semiperimeter-side1)*(semiperimeter-side2)*(semiperimeter-side3));
    printf ("Area of the triangle will be %f .\n",areaofthetriangle);
    return 0;
}