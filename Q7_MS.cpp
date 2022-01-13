// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    bool visit[505][505];
    int n,m,ans;
    
    void dfs(int i,int j,int &temp,vector<vector<int>>&grid){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]==0||visit[i][j])
            return;
        visit[i][j]=1;
        temp++;
        dfs(i+1,j,temp,grid);
        dfs(i-1,j,temp,grid);
        dfs(i,j-1,temp,grid);
        dfs(i,j+1,temp,grid);
        dfs(i+1,j+1,temp,grid);
        dfs(i+1,j-1,temp,grid);
        dfs(i-1,j+1,temp,grid);
        dfs(i-1,j-1,temp,grid);
        
        //visit[i][j]=0;
    }
    
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        ans=0;
        memset(visit,0,sizeof visit);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visit[i][j]||grid[i][j]==0)
                    continue;
                int temp=0;    
                dfs(i,j,temp,grid);
                ans=max(ans,temp);
            }
        }
        return ans;
        // Code here
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
