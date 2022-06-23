#include <stdio.h>
#define size 10 /* Size of the array */

void printArray(int arr[]);
void rotateByOne(int arr[]);

int main()
{
     int arr[100];
     int n, temp;
     for (int i = 0; i < size; i++)
     {
          printf("Enter element: ");
          scanf("%d", &arr[i]);
     }
     printf("Input number of times to rotate: ");
     scanf("%d", &n);
     /* Actual rotation */
     n = n % size;
     /* Print array before rotation */
     printf("Array before rotationn");
     printArray(arr);
     /* Rotate array n times */
     for (int i = 1; i <= n; i++)
     {
          rotateByOne(arr);
     }
     /* Print array after rotation */
     printf("\nArray after rotation\n");
     printArray(arr);
     return 0;
}

void rotateByOne(int arr[])
{
     int first;
     /* Store first element of array */
     first = arr[0];
     for (int i = 0; i < size - 1; i++)
     {
          arr[i] = arr[i + 1];
     }
     /* Copies the first element of array to last */
     arr[size - 1] = first;
}