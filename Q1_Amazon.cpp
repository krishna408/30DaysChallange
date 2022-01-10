class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        if(n==0) return 0;
        int dp[k+1][n];
        memset(dp,0,sizeof dp);
        
        for(int t=1;t<=k;t++){
            int mx=INT_MIN;
            for(int d=1;d<n;d++){
                mx=max(mx,dp[t-1][d-1]-prices[d-1]);
                dp[t][d]=max(dp[t][d-1],mx+prices[d]);
            }
        }
        return dp[k][n-1];
    }
};
