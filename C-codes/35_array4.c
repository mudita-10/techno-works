/*

Created by: Mudita Bhowmick
Program to print the frequency of all numbers in an array.

*/

#include <stdio.h>
int main()
{
    int number[100],frequency[100];
    int n,i,j,count;
    printf("\nEnter the number of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
        frequency[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(number[i]==number[j])
            {
                count++;
                frequency[j]=0;
            }
        }
        if(frequency[i]!=0)
        {
            frequency[i]=count;
        }
    }
    printf ("Frequency of all numbers:\n");
    for(i=0;i<n;i++)
    {
        if(frequency[i]!=0)
        {
            printf("%d is present %d times\n",number[i],frequency[i]);
        }
    }
    return 0;
}
