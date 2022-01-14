// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int mem[10005];
    Solution(){
        memset(mem,-1,sizeof mem);
    }
    
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        if(n<0)
            return 0;
        if(mem[n]!=-1) return mem[n];
        
        return mem[n]=max(FindMaxSum(arr,n-1),arr[n-1]+FindMaxSum(arr,n-2));    
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends