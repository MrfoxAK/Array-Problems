#include <stdio.h>
int main()
{
     int arr[] = { 6, 8, 4, -5, 7, 9 };
     int s = 15,sum=0;
     for (int i = 0; i < 6; i++)
     {
          sum=0;
          for (int j = i+1; j < 6; j++)
          {
               if (arr[i]+arr[j]==s)
               {
                    printf("%d,%d",arr[i],arr[j]);
               }
          }
          printf("\n");
     }
     return 0;
}