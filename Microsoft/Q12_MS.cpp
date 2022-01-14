// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        // Your code goes here
        int n=arr.size();
        sort(arr.begin(),arr.end());
         vector<vector<int>> res;
         for(int i=0;i<n-3;i++){
             //if(i>0&&arr[i-1]==arr[i]) continue;
             for(int j=i+1;j<n-2;j++){
               //  if(j>i+1&&arr[j]==arr[j-1]) continue;
                 int k=j+1,l=n-1;
                 int sum;
                 while(k<l){
                     //sum=arr[i]+arr[j]+arr[k]+arr[l];
                     
                     sum=arr[i]+arr[j]+arr[k]+arr[l];       
                     if(sum<K)
                        k++;
                    else if(sum>K)
                        l--;
                     else{
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                            while(k<l&&arr[k]==temp[2])
                            k++;
                            while(k<l&&arr[l]==temp[3])
                            l--;
                            res.push_back(temp);
                        }
                    
                 }
                 while(j+1<n&&arr[j]==arr[j+1]) j++;
             }
             while(i+1<n&&arr[i]==arr[i+1]) i++;
         }
         return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends