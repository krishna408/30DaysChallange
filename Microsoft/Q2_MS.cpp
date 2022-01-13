#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    
    vector<int> adj[10000];
    bool dfs(int node,int vis[],int dfsvis[]){
        vis[node]=1;
        dfsvis[node]=1;
        for(int x:adj[node]){
            if(vis[x]==0){
                if(dfs(x,vis,dfsvis)) return 1;
            }
            else if(dfsvis[x]==1)
                return 1;
        }
        dfsvis[node]=0;
        return 0;
    }
    
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    int vis[N];
	    int dfsvis[N];
	    memset(vis,0,sizeof vis);
	    memset(dfsvis,0,sizeof vis);
	    for(auto it:prerequisites){
	        adj[it.second].push_back(it.first);
	    }
        for(int i=0;i<N;i++){
         if(!vis[i]){
             if(dfs(i,vis,dfsvis))
                return 0;
         }
        }
        return 1;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends