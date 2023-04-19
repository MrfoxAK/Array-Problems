#include <iostream>
using namespace std;

int main()
{
     int n, m;
     cout << "Enter the size NxM: \n";
     cin >> n >> m;
     int arr[n][m];
     int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
     cout << "Enter the array elements: \n";
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cin >> arr[i][j];
          }
     }
     cout << "The array elements: \n";
     while (row_end >= row_start && col_end >= col_start)
     {
          for (int k = col_start; k <= col_end; k++)
          {
               cout << arr[row_start][k] << " ";
          }
          row_start++;
          for (int k = row_start; k <= row_end; k++)
          {
               cout << arr[k][col_end] << " ";
          }
          col_end--;
          for (int k = col_end; k >= col_start ; k--)
          {
               cout << arr[row_end][k] << " ";
          }
          row_end--;
          for (int k = row_end; k >= row_start; k--)
          {
               cout<< arr[k][col_start]<<" ";
          }
          col_start++;
     }
     return 0;
}