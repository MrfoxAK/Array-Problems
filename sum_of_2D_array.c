#include <stdio.h>
int main()
{
     int a[50][50],b[50][50],c[50][50];
     int rows,colms;
     printf("Enter the no of rows: ");
     scanf("%d",&rows);
     printf("Enter the no of coloms: ");
     scanf("%d",&colms);
     // for a array
     printf("Enter element for 1st array\n");
     for (int i = 0; i < rows ; i++)
     {
          for (int j = 0; j < colms; j++)
          {
               printf("Enter element at %d,%d : ",i,j);
               scanf("%d",&a[i][j]);
          } 
     }
     // for b array
     printf("Enter element for 2nd array\n");
     for (int i = 0; i < rows ; i++)
     {
          for (int j = 0; j < colms; j++)
          {
               printf("Enter element at %d,%d : ",i,j);
               scanf("%d",&b[i][j]);
          } 
     }
     // for sum
     for (int i = 0; i < rows ; i++)
     {
          for (int j = 0; j < colms; j++)
          {
               c[i][j] = a[i][j] + b[i][j];
          } 
     }
     // traversal
     for (int i = 0; i < rows ; i++)
     {
          for (int j = 0; j < colms; j++)
          {
               printf("sum at %d,%d : %d\n",i,j,c[i][j]);
          } 
     }
     return 0;
}