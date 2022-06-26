#include <stdio.h>
int main()
{
     int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
     int temp;
     for (int i = 0; i < 10; i++)
     {
          if (arr[i] % 2)
          {
               for (int j = i + 1; j < 10; j++)
               {
                    if (arr[j % 2 == 0])
                    {
                         temp = arr[i];
                         arr[i] = arr[j];
                         arr[j] = temp;
                    }
               }
          }
     }
     // Traversal
     for (int i = 0; i < 10; i++)
     {
          printf("[%d] ", arr[i]);
     }

     return 0;
}