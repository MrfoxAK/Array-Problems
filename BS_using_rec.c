#include <stdio.h>

int Binary_search(int arr[],int low,int high,int key){
     int mid = ((low+high)/2);
     if (mid==key)
     {
          return 1;
     }
     else if (mid>high || mid<low)
     {
          return 0;
     }
     else if (key>mid)
     {
          return Binary_search(arr,mid+1,high,key);
     }
     else{
          return Binary_search(arr,low,mid-1,key);
     }
     return 0;
}

int main()
{
     int arr[] = {1,2,3,4,5,6,7,8,9,10};
     int size = 10;
     if (Binary_search(arr,0,size,5))
     {
          printf("Found\n");
     }
     else{
          printf("Not Found\n");
     }
     return 0;
}