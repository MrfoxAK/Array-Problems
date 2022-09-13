#include <stdio.h>
int main()
{
     int flag=0;
     int arr1[] = {1,4,5};
     int arr2[] = {1,5};
     for (int i = 0; i < 5; i++)
     {
          flag=0;
          for (int j = 0; j < 9; j++)
          {
               if (arr2[i]==arr1[j])
               {
                    flag=1;
                    break;
               }
          }
          if (flag==0)
          {
               break;
          }
     }
     if (flag==1)
     {
          printf("SubSet\n");
     }
     else
     {
          printf("Not SubSet\n");
     }
     return 0;
}