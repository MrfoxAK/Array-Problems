#include <stdio.h>

int main()
{
     // Write C code here
     int temp, pivot = 0;
     int arr[] = {0, 3, 6, 9, 12, 14, 18, 20, 22, 25, 27};
     int n = 4;
     int a[n];
     for (int i = 0; i < n; i++)
     {
          a[i] = arr[i];
     }
     for (int i = 0; i < 10; i++)
     {
          arr[i] = arr[i + n];
     }
     int x = 10 - n;
     int z = 0;
     while (x < 10)
     {
          arr[x] = a[z];
          z++;
          x++;
     }
     for (int i = 0; i < 10; i++)
     {
          printf("%d ", arr[i]);
     }
     return 0;
}