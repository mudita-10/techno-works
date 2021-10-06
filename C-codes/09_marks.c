/* 

Created by: Mudita Bhowmick
Program to find out the aggregate marks and percentage of five subjects obtained by a student.
Maximum marks that can be obtained by a student is 100.

*/

#include <stdio.h>
int main()
{
    int subject1,subject2,subject3,subject4,subject5,aggregate;
    float percentage;
    printf("\nEnter marks of five subjects:\n");
    scanf("%d%d%d%d%d",&subject1,&subject2,&subject3,&subject4,&subject5);
    aggregate=subject1+subject2+subject3+subject4+subject5;
    percentage=aggregate/5.0;
    printf("The aggregate marks will be %d and percentage will be %3.1f",aggregate,percentage);
    return 0;
}