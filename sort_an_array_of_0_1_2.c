#include <stdio.h>
int main()
{
     int c0=0,c1=0,c2=0;
     int arr[] = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
     for (int i = 0; i < 12; i++)
     {
          if (arr[i]==0)
          {
               c0++;
          }
          else if(arr[i]==1)
          {
               c1++;
          }
          else if (arr[i]==2)
          {
               c2++;
          }
     }
     int i=0;
     while (c0)
     {
          arr[i]=0;
          c0--;
          i++;
     }
     while (c1)
     {
          arr[i]=1;
          c1--;
          i++;
     }
     while (c2)
     {
          arr[i]=2;
          c2--;
          i++;
     }
     for (int i = 0; i < 12; i++)
     {
          printf("[%d]",arr[i]);
     }
     
     return 0;
}