/*

Created by: Mudita Bhowmick
Program to print the minimum and maximum number using array.

*/

#include <stdio.h>
int main()
{
    int number[100],i,n,minimum,maximum;
    printf("\nEnter number of elements:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    scanf("%d",&number[i]);
    minimum=maximum=number[0];
    for(i=1;i<n;i++)
    {
        if(minimum>number[i])
		minimum=number[i];   
		if(maximum<number[i])
		maximum=number[i];       
    }
    printf("Minimum number is %d\n",minimum);
    printf("Maximum number is %d\n",maximum);
    return 0;
}