// // #include<stdio.h>
// // int main()
// // {
// //     // arrays

// //     // int marks[4];
// //     // marks[0] = 34;
// //     // marks[1] = 4;
// //     // marks[2] = 374;

// //     // printf("Marks of student %d", marks[0]);
// //     int marks[2][4] = {{23,45,6},{8,6,89,9}};
// //     for (int i = 0; i < 4; i++)
// //     {
// //         for (int j = 0; j < 6; j++)
// //         {
// //             printf("%d",marks[i][j]);
// //         }
// //         printf("\n");

// //     }

// //     // for (int i = 0; i < 5; i++)
// //     // {

// //     //     printf("Please enter the value of %d element of a arry is: ", i );
// //     //     scanf("%d", &marks[i]);

// //     // }
// //     // for (int i = 0; i < 5; i++)
// //     // {

// //     //     printf("Please enter the value of %d element of a arry is: %d\n", i,marks[i] );

// //     //     int m[5]={4,5,6};

// //     // }

// //     return 0;
// // }

// #include <stdio.h>

// int main()
// {
//     // printf("Hello World\n");
//     int marks[2][4] = {{45, 234, 2, 3},
//                        {3, 2, 3, 3}};

//     // for(int i = 0; i < 4; i++)
//     // {
//     //     printf("Enter the value of %d element of the array\n", i);
//     //     scanf("%d", &marks[i]);
//     // }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             /* code */

//             // printf("The value of %d, %d element of the array is %d\n", i, j, marks[i][j]);
//             printf("%d ", marks[i][j]);
//         }
//         printf("\n");
//     }

//     // marks[0] = 34;
//     // printf("Marks of student 1 is %d\n", marks[0]);
//     // marks[0] = 4;
//     // marks[1] = 24;
//     // marks[2] = 34;
//     // marks[3] = 44;
//     // printf("Marks of student 1 is %d\n", marks[0]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[] = {1,2,34,5,6,6,76,9};
//     printf("%d", 8*sizeof(int));
//     return 0;
// }

// // int [-5] ---> That is wrong

// macros_array
// #include <stdio.h>
// #define N 4
// int main()
// {
//     int a[N],i;
//     for ( i = 0; i < N; i++)
//     {
//         printf("Enter the input for index %d : \n", i);
//         scanf("%d", &a[i]);
//     }
//     printf("Array elements are: \n");
//     for ( i = 0; i < N; i++)
//     {
//         printf("%d\n",a[i]);
//     }

//     return 0;
// }





// user input array
#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value at %d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value at %d is %d\n", i, arr[i]);
    }
    
    return 0;
}
