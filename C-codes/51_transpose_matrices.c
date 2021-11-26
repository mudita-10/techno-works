/*

Created by: Mudita Bhowmick
Program to create the transpose of a matrix.

*/

#include <stdio.h>
int main() 
{
    int array[10][10], transpose[10][10], rows, columns;
    printf("\nEnter rows and columns of the matrix:\n");
    scanf("%d %d", &rows, &columns);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; ++i)
    for (int j = 0; j < columns; ++j)
    {
        printf("Enter element a%d%d: ", i + 1, j + 1);
        scanf("%d", &array[i][j]);
    }
    printf("The matrix you have entered:\n");
    for (int i = 0; i < rows; ++i)
    for (int j = 0; j < columns; ++j)
    {
        printf("%d  ", array[i][j]);
        if (j == columns - 1)
        printf("\n");
    }
    for (int i = 0; i < rows; ++i)
    for (int j = 0; j < columns; ++j)
    {
        transpose[j][i] = array[i][j];
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < columns; ++i)
    for (int j = 0; j < rows; ++j)
    {
        printf("%d  ", transpose[i][j]);
        if (j == rows - 1)
        printf("\n");
    }
    return 0;
}