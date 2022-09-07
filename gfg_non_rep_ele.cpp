//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        int freq[n];
        for(int k=0;k<n;k++){
            freq[k] = 1;
        }
        
        int i=0,j=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    freq[i]++;
                    freq[j]++;
                }
            }
        }
        
        for(int z=0;z<n;z++){
            if(freq[z]==1){
                return arr[z];
            }
            
        }
        
        
        
        
        
    }
  
};


//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends