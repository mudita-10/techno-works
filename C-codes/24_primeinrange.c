/*

Created by: Mudita Bhowmick
Program to print all the prime numbers in a range given by the user.

*/

#include <stdio.h>
int main()
{
    int n,i,count,lowestRange,highestRange;
    printf("\nEnter the range of numbers:\n");
    scanf("%d %d",&lowestRange,&highestRange);
    printf("The prime numbers between %d and %d are:\n",lowestRange,highestRange);
    for(n=lowestRange;n<=highestRange;n++)
    {
        count=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && n!= 1)
        printf("%d ",n);
    }
    printf("\n");
    return 0;  
}