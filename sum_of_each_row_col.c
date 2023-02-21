#include <stdio.h>
int main()
{
     int row,col;
     printf("Enter the no.of Row: ");
     scanf("%d",&row);
     printf("Enter the no.of Col: ");
     scanf("%d",&col);
     int a[row][col];
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               printf("Enter element at %d,%d : ",i,j);
               scanf("%d",&a[i][j]);
          }
     }
     // print
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     // Sum
     int sum_row=0,sum_col=0;
     for (int i = 0; i < row; i++)
     {
          sum_row=0;
          for (int j = 0; j < col; j++)
          {
               sum_row+=a[i][j];
          }
          printf("Sum of the %d row is : %d\n",i,sum_row);
     }
     for (int i = 0; i < row; i++)
     {
          sum_col=0;
          for (int j = 0; j < col; j++)
          {
               sum_col+=a[j][i];
          }
          printf("Sum of the %d col is : %d\n",i,sum_col);
     }
     return 0;
}