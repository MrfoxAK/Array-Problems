//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int parr[n];
        int narr[n];
        int aj=0,nj=0,ac=0,nc=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                parr[aj]=arr[i];
                aj++;
                ac++;
            }
            else{
                narr[nj]=arr[i];
                nj++;
                nc++;
            }
        }
        int i;
        aj=0,nj=0;
        for(i=0;i<ac;i++){
            arr[i]=parr[aj];
            aj++;
        }
        
        for(i;i<ac+nc;i++){
            arr[i]=narr[nj];
            nj++;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends