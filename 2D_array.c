#include <stdio.h>
int main()
{
    // int arr[2][3] ={};
    // value = 2*3 = 6

    // int a[2][3] = {1,2,3,4,5,6}; same
    // int a[2][3] = {{1,2,3},{4,5,6}}; same
    // int a[][3]; ok
    // int a[2][]; not ok

    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",arr[i][j]);
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",arr[i][j]);
        }
        
    }
    
    
    return 0;
}