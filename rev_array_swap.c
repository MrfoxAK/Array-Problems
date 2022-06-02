// reverse a array

#include <stdio.h>
int main()
{
    int temp;
    int arr[] = {1,24,5,44,5,7,2};
    for (int i = 1; i <= 3; i++)
    {
        temp = arr[i-1];
        arr[i-1] = arr[7-i];
        arr[7-i] = temp;
    }
    for (int j = 0; j < 7; j++)
    {
        printf("%d ",arr[j]);
    }
    
    return 0;
}





