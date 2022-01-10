/*

Created by: Mudita Bhowmick
Implement an array in a structure which also keeps track of the size. 
Explain and implement the following functions: 1>isFull(a) 2>isEmpty(a) 3>count(a) 4>create(a) 5>insert_at_index(a,value,index) 
6>append(a,value) 7>delete_from_end(a) -> return the element 8> delete_from_index(a,index) -> return the element 9>traverse(a) 
10>access(a,index) -> returns the element 11>edit(a,index,newValue) "changes the a at idx with newValue, not insert" 
12>returnIndex(a,value) -> return the first idx containing val 13>returnAllIndex(a,value) -> returns list of all index that has value 
14>reduceSum(a) -> returns sum of all elements 15>reduceMean(a) -> returns mean of all elements 
16>reduceMax(a) -> returns max of all elements 17> reduceMin(a) -> reduce min of all elements now treating the array as histogram implement 
18> meanHist(a) -> return mean of histogram 19> modeHist(a) -> returns mode of histogram 20> medianHist(a) -> returns median of histogram 
21>sdHist(a) -> returns standard deviation of histogram.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct arrayADT
{
    int array[100];
    int arrayEnd;
};
void create (struct arrayADT *a)
{
    a->arrayEnd = -1;
}
int isFull (struct arrayADT *a)
{
    if (a->arrayEnd == 99)
    return 1;
    else
    return 0;
}
int isEmpty (struct arrayADT *a)
{
    if (a->arrayEnd == -1)
    return 1;
    else
    return 0;
}
int count (struct arrayADT *a)
{
    return (a->arrayEnd+1);
}
void insert_at_index (struct arrayADT *a, int value, int index)
{
    if (isFull(a))
    {
        printf ("No space.\n");
    }
    else
    {
        for (int i = a->arrayEnd; i >= index-1; i--)
        {
            a->array[i+1] = a->array[i];
        }
        a->array[index-1] = value;
        a->arrayEnd ++;
    }
}
void append (struct arrayADT *a, int value)
{
    if (a->arrayEnd == 99)
    {
        printf ("No space.\n");
    }
    else
    {
        a->arrayEnd ++;
        a->array[a->arrayEnd] = value;
    }
}
int delete_from_end (struct arrayADT *a)
{
    int value;
    if(isEmpty(a))
    {
        printf ("It is empty.\n");
        value = -1;
    }
    else
    {
        a->arrayEnd--;
        value = a->array[a->arrayEnd + 1];
    }
    return value;
}
int delete_at_index (struct arrayADT *a, int index)
{
    int value;
    if (isEmpty(a))
    {
        printf ("It is Empty.\n");
        value = -1;
    }
    else
    {
        value = a->array[index-1];
        for (int i = index-1; i < a->arrayEnd; i++)
        {
            a->array[i] = a->array[i + 1];
            a->arrayEnd--;
        }
        return value;
    }
}
void traverse(struct arrayADT *a)
{
    for (int i = 0; i <= a->arrayEnd; i++)
    {
        printf("%d ", a->array[i]);
    }
    printf ("\n");
}
int access (struct arrayADT *a, int index)
{
    return a->array[index-1];
} 
int edit (struct arrayADT *a, int index, int newValue)
{
    int value;
    value = a->array[index-1];
    a->array[index-1] = newValue;
    return value;
}
int returnIndex (struct arrayADT *a, int value)
{
    for (int i=0; i<=a->arrayEnd; i++)
    {
        if (a->array[i] == value)
        return i+1;
    }
    return -1;
}
int returnAllIndex (struct arrayADT *a, int value)
{
    for (int i=0; i<=a->arrayEnd; i++)
    {
        if (a->array[i] == value)
        printf ("%d ",  i+1);
    }
    printf ("\n");
}
int reduceSum(struct arrayADT *a)
{
    int sum=0;
    for(int i=0;i<=a->arrayEnd;i++)
    {
        sum = sum + a->array[i];
    }
    return sum;
}
double reduceMean(struct arrayADT *a)
{
    return ((double)reduceSum(a)/count(a));
}
int reduceMax(struct arrayADT *a)
{
    int max=a->array[0];
    for(int i=0;i<=a->arrayEnd;i++)
    {
        if(a->array[i]>max)
        max=a->array[i];
    }
    return max;
}
int reduceMin(struct arrayADT *a)
{
    int min=a->arrayEnd;
    for(int i=0;i<=a->arrayEnd;i++)
    {
        if(a->array[i]<min)
        min=a->array[i];
    }
    return min;
}
double meanHist(struct arrayADT *a)
{
    double sum1=0, sum2=0;
    for(int i=0;i<=a->arrayEnd;i++)
    {
        sum1 =sum1 + (a->array[i])*i;
        sum2 =sum2 + a->array[i];
    }
 
    return (sum1/sum2);
}
double medianHist(struct arrayADT *a)
{
    int x=0;
    double median;
    for(int i=0;i<=a->arrayEnd;i++)
    {
        for(int j=0;j<a->arrayEnd-1;j++)
        {
            if(a->array[j]>a->array[j+1])
            {
                x=a->array[j];
                a->array[j]=a->array[j+1];
                a->array[j+1]=x;
            }
        }
    }
    if(a->arrayEnd%2==0)
    {  
        median=(a->array[(a->arrayEnd-1)/2] + a->array[a->arrayEnd/2])/2.0; 
    }
    else
    {
        median=a->array[a->arrayEnd/2];
    }
    return median;
}
double modeHist(struct arrayADT *a)
{
    int mode=3*medianHist(a)-2*meanHist(a);
    return mode;
}
float meanxSquare(struct arrayADT *a)
{
    float sum=0.0;
    int i;
    for(i=0;i<=a->arrayEnd;i++)
    {
        sum = sum + (a->array[i]*a->array[i]);
    }
    return sum;
}
double sdHist(struct arrayADT *a)
{
    double sdHist=0.0;
    int i;
    for(i=0;i<=a->arrayEnd;i++)
    {
        sdHist=sqrt(meanxSquare(a)-((meanHist(a)*(meanHist(a)))/count(a))/(count(a)-1));
    }
    return sdHist;
}

int main()
{
    struct arrayADT array1, array2;

    create(&array1);
    create(&array2);    
    append(&array1, 9);
    append(&array1, 4);
    append(&array1, 3);
    append(&array1, 6);
    traverse(&array1);// 9 4 3 6
 
    insert_at_index(&array1, 3, 1);
    traverse(&array1);//3 9 4 3 6
 
    delete_from_end(&array1);
    traverse(&array1);//3 9 4 3
 
    delete_at_index(&array1, 3);
    traverse(&array1);//3 9 3

    printf ("The element in index 2 is %d.\n",access (&array1, 2));//9
    

    printf ("The  index of element 9 is %d.\n",returnIndex (&array1, 9));//2
    

    printf ("All the index of element 3 is ");
    returnAllIndex (&array1, 3);// 1 3
    

    edit(&array1,1,0);
    traverse(&array1);//0 9 3


    append(&array2,2);
    append(&array2,3);
    append(&array2,5);
    append(&array2,7);
    append(&array2,8);
    append(&array2,4);
    append(&array2,2);
    traverse(&array2);//2 3 5 7 8 4 2


    printf("Sum of all the values is %d\n",reduceSum(&array2));
    printf("Mean of all the values is %lf\n",reduceMean(&array2));
    printf("Maximum of all elements is %f\n",reduceMax(&array2));
    printf("Minimum of all elements is %f\n",reduceMin(&array2));

    
    printf("Mean of the histogram is %lf\n",meanHist(&array2));
    printf("Median of the histogram is %lf\n",medianHist(&array2));
    printf("Mode of the histogram is %lf\n",modeHist(&array2));
    printf("Standard deviation of the histogram is %lf\n",sdHist(&array2));

    return 0;
}
