#include <stdio.h>
int main()
{
     int temp;
     int arr[] = {20, 2, 10, 6, 52, 31, 0, 45, 79, 40};
     for (int i = 0; i < 10; i++)
     {
          for (int j = i + 1; j < 10; j++)
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
     for (int i = 0; i < 10; i++)
     {
          printf("[%d] ", arr[i]);
     }

     return 0;
}