#include <stdio.h>
#define R 4
#define C 4
int main()
{
     int arr1[R][C] = { {1, 2, 3, 4},{6, 7, 8, 9},{11, 12, 13, 14},{16, 17, 18, 19}};
     printf("The given array in matrix form is :  \n");
     for (int i = 0; i < R; i++)
     {
          for (int j = 0; j < C; j++)
          {
               printf("%d  ", arr1[i][j]);
          }
          printf("\n");
     }
     int top=0;
     int right=C-1;
     int down=R-1;
     int left=0;
     // printf("%d %d",top,right);
     int dir=0;
     while (top<=down && left<=right)
     {
          if (dir==0)
          {
               for (int i = left; i <= right; i++)
               {
                    printf("%d ",arr1[top][i]);
               }
               top+=1;
          }
          else if (dir==1)
          {
               for (int i = top; i <= down; i++)
               {
                    printf("%d ",arr1[i][right]);
               }
               right-=1;
          }
          else if (dir==2)
          {
               for (int i = right; i >= left; i--)
               {
                    printf("%d ",arr1[down][i]);
               }
               down-=1;
          }
          else if (dir==3)
          {
               for (int i = down; i >= top; i--)
               {
                    printf("%d ",arr1[i][left]);
               }
               left+=1;
          }
          dir = (dir+1)%4;
     }
     return 0;
}