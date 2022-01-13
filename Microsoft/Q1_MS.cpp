class Solution{
  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++) sum+=arr[i]; 
	    bool dp[n+1][sum+1];
	    memset(dp,0,sizeof dp);
	    for(int i=0;i<=n;i++)
	        dp[i][0]=1;
	   for(int i=1;i<=n;i++)
	   for(int j=1;j<=sum;j++){
	    if(j>=arr[i-1]){
	        dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
	    }else
	        dp[i][j]=dp[i-1][j];
	   }
	   
	  vector<int> res;
	  for(int i=0;i<=sum/2;i++){
	      if(dp[n][i])
	        res.push_back(i);
	       // cout<<dp[n][i]<<" "<<i<<endl;
	  }
	  
	   int ans=INT_MAX;
	   for(int i=0;i<res.size();i++){
	      // cout<<res[i]<<"-";
	       int temp=sum-2*res[i];
	       ans=min(ans,temp);
	   }
	   return ans;
	} 
