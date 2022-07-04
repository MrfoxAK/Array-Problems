#include <stdio.h>

int max,min;  //global variable 

/* Function declarations */
int maximum(int array[], int index, int len)
{
     if (index < len)
     {
          if (array[index] > max)
          {
               max = array[index];
          }
     }
     if (index==len)
     {
          return max;
     } 
     maximum(array,index+1,len);
}


int minimum(int array[], int index, int len)
{
     if (index < len)
     {
          if (array[index] < min)
          {
               min = array[index];
          }
     }
     if (index==len)
     {
          return min;
     } 
     minimum(array,index+1,len);
}


int main()
{
     int N, arr[50],maxi,mini;
     printf("Enter size of the array: ");
     scanf("%d", &N);
     printf("Enter %d elements in array: ", N);
     for (int i = 0; i < N; i++)
     {
          scanf("%d", &arr[i]);
     }
     max = arr[0];
     min = arr[0];
     maxi = maximum(arr,0,N);
     mini = minimum(arr,0,N);
     printf("The max is : %d\n",maxi);
     printf("The min is : %d\n",mini);
     return 0;
}