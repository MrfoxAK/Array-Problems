
// Union
#include <stdio.h>

int main()
{
     int flag=0;
     int arr1[] = {2,1,5,57,9};
     int arr2[] = {4,5,2,56,96};
     int arr3[10];
     int i=0,j=0,k=0;
     while (i<5)
     {
          arr3[k]=arr1[i];
          i++;
          k++;
     }
     for (int i = 0; i < 5; i++)
     {
          flag=0;
          for (int j = 0; j < 5; j++)
          {
               if (arr2[i]==arr3[j])
               {
                    flag=1;
                    break;
               }
          }
          if (flag==0)
          {
               arr3[k] = arr2[i];
               k++;
          }
     }
     
     
     
     for (int i = 0; i < k; i++)
     {
          printf("%d ",arr3[i]);
     }
     
     
     return 0;
}



//// intersection
// #include <stdio.h>



// int main()
// {
//      int arr1[] = {2,1,5,57,9};
//      int arr2[] = {4,5,2,56,96};
//      for (int i = 0; i < 5; i++)
//      {
//           for (int j = 0; j < 5; j++)
//           {
//                if (arr1[i]==arr2[j])
//                {
//                     printf("%d ",arr1[i]);
//                }
               
//           }
          
//      }
     
//      return 0;
// }