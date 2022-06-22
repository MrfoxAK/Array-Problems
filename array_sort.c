/**
 * C program to sort elements of array in ascending order
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size

void main()
{
     int arr[MAX_SIZE];
     int size;
     int i, j, temp;
     /* Input size of array */
     printf("Enter size of array: ");
     scanf("%d", &size);
     /* Input elements in array */
     printf("Enter elements in array: ");
     for (i = 0; i < size; i++)
     {
          scanf("%d", &arr[i]);
     }
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (arr[i] > arr[j])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }
     /* Print the sorted array */
     printf("\nElements of array in ascending order: ");
     for (i = 0; i < size; i++)
     {
          printf("[%d]", arr[i]);
     }
}