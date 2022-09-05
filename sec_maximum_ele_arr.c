#include <stdio.h>
int main()
{
     int arr[] = {2,5,2,212,157,8,5};
     int secL=arr[0],firstL=arr[0],max=arr[0];
     for (int i = 0; i < 7; i++)
     {
          if (arr[i]>max)
          {
               secL=max;
               max=arr[i];
          }
          else if (arr[i]>secL && arr[i]<max)
          {
               secL = arr[i];
          }
     }
     printf("firstL is %d\n",max);
     printf("secL is %d",secL);
     return 0;
}