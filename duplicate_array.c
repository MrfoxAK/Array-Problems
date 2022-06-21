/**
 * C program to count total number of duplicate elements in an array
 */
#include <stdio.h>
int main()
{
     int a[100],n,count=0;
     // size
     printf("Enter the size of the array : ");
     scanf("%d",&n);
     // input
     for (int i = 0; i < n; i++)
     {
          printf("Enter element : ");
          scanf("%d",&a[i]);
     }
     // duplicate count
     for (int i = 0; i < n; i++)
     {
          for (int j = i+1; j < n; j++)
          {
               if (a[i]==a[j])
               {
                    count++;
                    break;
               }
          }
     }
     printf("The Total no of dublicate is : %d",count);
     return 0;
}