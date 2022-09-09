#include <stdio.h>

int main()
{
     // Write C code here
     int temp;
     int arr[] = {1, 2, 3, 4, 7, 5, 9, 8};
     for (int i = 0; i < 8; i++)
     {
          for (int j = i + 1; j < 8; j++)
          {
               if (arr[i] > arr[j])
               {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
          }
     }
     for (int i = 0; i < 7; i++)
     {
          if ((arr[i] + 1) != arr[i + 1])
          {
               printf("The element is %d\n", arr[i] + 1);
               break;
          }
     }
     for (int i = 0; i < 8; i++)
     {
          printf("%d ", arr[i]);
     }
     return 0;
}
