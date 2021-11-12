/*

Created by: Mudita Bhowmick
A menu-driven program to execute different sorting algorithms(bubble sort, Selection sort)
using a function call.

*/

#include<stdio.h>
void display(int a[],int n);
void bubble_sort(int a[],int n);
void selection_sort(int a[],int n);
int main()
{
   int n,choice,i;
   char c[100];
   printf("\nEnter the number of elements:\n");
   scanf("%d",&n);
   int arrray[n];
   for(i=0;i<n;i++)
   {
        printf("Enter element %d:\n",i+1);
        scanf("%d",&arrray[i]);
   }
   printf("Select any option for Sorting from below :\n");
   while(1)
   {
    printf("\n1.Bubble Sort\n2.Selection Sort\n3.Display Array.\n4.Exit the Program.\n");
    printf("Enter your Choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        bubble_sort(arrray,n);
        break;
        case 2:
        selection_sort(arrray,n);
        break;
        case 3:
        display(arrray,n);
        break;
        case 4:
        return 0;
        default:
        printf("Wrong Choice. Choose again!\n");
    }
}
return 0;
}
void display(int array[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d ",array[i]);
   }

}
void bubble_sort(int array[],int n)
{
  int i,j,t;
  for(i=0;i<n;i++)
   {
      for(j=0;j<n-i-1;j++)
       {
           if(array[j]>array[j+1])
           {
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
           }
       }
   }
   printf("After sorting the array using bubble sort-----\nElements are : ");
   display(array,n);
}
void selection_sort(int array[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
            {
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }

    }
    printf("After sorting the array using selection sort-----\nElements are : ");
    display(array,n);
}
