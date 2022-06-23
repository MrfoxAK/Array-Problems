#include <stdio.h>
int main()
{
     int arr[] = {2,46,7,33,8,9,56};
     int n,temp;
     printf("Enter no of rotation : ");
     scanf("%d",&n);
     while (n)
     {
          temp = arr[6];
          for (int i = 6; i >= 1; i--)
          {
               arr[i] = arr[i-1];
          }
          arr[0] = temp;
          n--;
     }
     for (int i = 0; i < 7; i++)
     {
          printf("[%d] ",arr[i]);
     }
     return 0;
}