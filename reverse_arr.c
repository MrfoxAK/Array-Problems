// #include <stdio.h>
// int main()
// {
//     int n;
//     int arr[] = {1,2,3,45,5,53,4};
//     n = sizeof(arr)/sizeof(arr[0]);
//     for (int i = n-1; i>= 0; i--)
//     {
//         printf("%d\n",arr[i]);
//     }
//     // printf("%d",n);
//     return 0;
// }


void arrayreverse(int array[])
{
    int temp,i;
    for ( i = 0; i < 8 / 2; i++)
    {
        temp = array[i];
        array[i] = array[7 - i];
        array[7 - i] = temp;
    }
}

#include <stdio.h>
int main()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6, 78, 55};
    arrayreverse(arr);
    for ( i = 0; i < 8; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
