#include <stdio.h>
#include <limits.h>

int main()
{
     int arr[100],i,n,l1,l2;
     printf("Enter the size of the array: ");
     scanf("%d",&n);
     for (i = 0; i < n; i++)
     {
          printf("Enter element: ");
          scanf("%d",&arr[i]);
     }
     l1 = INT_MIN;
     l2 = INT_MIN;
     for ( i = 0; i < n; i++)
     {
          if (arr[i]>l1)
          {
               l2=l1;
               l1=arr[i];
          }
          else if(arr[i]<l1 && arr[i]>l2)
          {
               l2 = arr[i];
          }
     }
     printf("The 1st largest element : %d\n",l1);
     printf("The 2nd largest element : %d\n",l2);
     return 0;
}