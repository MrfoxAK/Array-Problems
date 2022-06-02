#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    array[0] = 32;
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()
    return 0;
}


int func2(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        // printf("The value at %d is %d\n", i, ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 312125;
}


void func3(int a[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is %d\n", i, j, a[i][j]);
        }
    }
}


int main()
{
    int arr[][2] = {{1, 2}, {3, 4}};
    // printf("The value at index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    // printf("The value at index 0 is %d\n", arr[0]);
    func3(arr);
    return 0;
}