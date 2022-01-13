class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,ans=INT_MAX;
        int n=nums.size();
        bool b;
        int end=0,start=0;
        for(end=0,start=0;end<n;){
            b=1;
            if(end<n&&sum<target){
             sum+=nums[end++];
                //b=0;
            }else{
              while(start<n&&sum>=target){
                  ans=min(ans,end-start);
                  sum-=nums[start++];
              }
                //b=0;
            }
            //if(b) break;
        }
        while(start<n&&sum>=target){
                  ans=min(ans,end-start);
                  sum-=nums[start++];
              }
        return ans==INT_MAX?0:ans;
    }
};
// less code
int minSubArrayLen(int s, vector<int>& nums)
{
    int n = nums.size();
    int ans = INT_MAX;
    int left = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        while (sum >= s) {
            ans = min(ans, i + 1 - left);
            sum -= nums[left++];
        }
    }
    return (ans != INT_MAX) ? ans : 0;
}
