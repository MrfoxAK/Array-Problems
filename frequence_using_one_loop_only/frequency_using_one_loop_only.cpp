// freq using one loop
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
     int arr[] = {1, 5, 3, 4, 3, 5, 6};
     int f[7];
     int n = 7;
     for (int i = 0; i < n; i++)
     {
          f[i] = 0;
     }
     for (int i = 0; i < n; i++)
     {
          f[arr[i]]++;
     }
     for (int i = 0; i < n; i++)
     {
          cout << "freq of " << i << " is " << f[i] << endl;
     }
     return 0;
}


// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//      int arr[] = {1,5,3,4,3,5,6};
//      int f[10];
//      int n = 7;
//      for (int i = 0; i < n; i++)
//      {
//           f[i] = 0;
//      }
//      for (int i = 0; i < n; i++)
//      {
//           for (int j = i+1; j < n; j++)
//           {
//                if(arr[i]==arr[j]){
//                     f[i]++;
//                     f[j]++;
//                }
//           }
//      }
//      for (int i = 0; i < n; i++)
//      {
//           cout<<f[i]<<" ";
//      }
//      return 0;
// }