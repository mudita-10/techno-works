/*

Created by: Mudita Bhowmick
Program to print the grade of a student according to their scole from the table given below:
Score   Grade
<50       F
<65       C
<80       B
<100       A

*/

#include<stdio.h>
int main()
{
    int score;
    printf ("\nEnter the score:\n");
    scanf ("%d",&score);
    if (score<50)
    {
        printf ("Grade will be F");
    }
    else if (score<65)
    {
        printf ("Grade will be C");
    }
    else if (score<80)
    {
        printf ("Grade will be B");
    }
    else
    {
        printf ("Grade will be A");
    }
    return 0;
}