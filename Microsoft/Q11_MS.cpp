// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
string binery(int i){
    string res="";
    
    while(i){
        int k=i%2;
        res.push_back(k+'0');
        i/=2;
    }
    
    reverse(res.begin(),res.end());
    return res;
}

vector<string> generate(int N)
{
	// Your code here
	vector<string> res;
	for(int i=1;i<=N;i++){
	 res.push_back(binery(i));   
	}
	return res;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends