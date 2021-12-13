/*

Created by: Mudita Bhowmick
Program to print the sum of two matrices.

*/

#include <stdio.h>
int main()
{
    int rows,columns,array1[10][10],array2[10][10],sum[10][10],i,j;
    printf("\nEnter the number of rows:\n");
    scanf("%d", &rows);  
    printf("Enter the number of columns:\n");
    scanf("%d", &columns);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; ++i)
    for (j = 0; j < columns; ++j)
    {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &array1[i][j]);
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; ++i)
    for (j = 0; j < columns; ++j)
    {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &array2[i][j]);
    }
    for (i = 0; i < rows; ++i)
    for (j = 0; j < columns; ++j)
    {
      sum[i][j] = array1[i][j] + array2[i][j];
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < rows; ++i)
    for (j = 0; j < columns; ++j)
    {
      printf("%d ", sum[i][j]);
      if (j == columns - 1)
      {
        printf("\n");
      }
    }
    return 0;
}
