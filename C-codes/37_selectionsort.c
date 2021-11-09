/*

Created by: Mudita Bhowmick
Program to sort an array using selection sort.

*/

#include <stdio.h>
int main()
{
  int array[100], n, c, d, p, t;
  printf("\nEnter number of elements:\n");
  scanf("%d", &n);
  printf("Enter the numbers:\n");
  for (c = 0; c < n; c++)
  {
    scanf("%d", &array[c]);
  }
  for (c = 0; c < (n - 1); c++)
  {
    p = c;
    for (d = c + 1; d < n; d++)
    {
      if (array[p] > array[d])
        p = d;
    }
    if (p != c)
    {//swapping the numbers
      t = array[c];
      array[c] = array[p];
      array[p] = t;
    }
  }
  printf("Sorted list in ascending order:\n");
  for (c = 0; c < n; c++)
  {
    printf("%d ", array[c]);
  }
  return 0;
}