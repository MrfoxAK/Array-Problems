#include <stdio.h>
int main()
{
     int arr[3][3],sum=0;
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               scanf("%d", &arr[i][j]);
          }
     }

     for (int i = 0; i < 3; i++)
     {
          sum+=arr[i][3-i-1];
     }

     printf("the sum is : %d\n",sum);

     return 0;
}