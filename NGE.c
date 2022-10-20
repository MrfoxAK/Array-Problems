#include<stdio.h>

void printaraay(int arr[],int n){
     for (int i = 0; i < n; i++)
     {
          printf("%d ",arr[i]);
     }
}

// brute froce method
void NGE(int arr[],int n){
     // Your code here
     int i = 0, j = 0, cur;
     while (i < n)
     {
          cur = 0;
          for (j = i + 1; j < n; j++)
          {
               if (arr[j] > arr[i])
               {
                    arr[i] = arr[j];
                    cur=1;
                    break;
               }
          }
          if (cur==0)
          {
               arr[i]=-1;
          }
          i++;
     }
}

int main(){
     int arr[]={6, 8, 0, 1, 3};
     printaraay(arr,5);
     NGE(arr,5);
     printf("\n");
     printaraay(arr,5);
}