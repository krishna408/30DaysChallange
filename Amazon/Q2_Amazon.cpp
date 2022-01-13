class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int left[n];
        int right[n];
        memset(left,0,sizeof left);
        memset(right,0,sizeof right);
        
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                left[i]=left[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                right[i]=right[i+1]+1;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(left[i]>0&&right[i]>0){
             int temp=left[i]+right[i];
                ans=max(ans,temp+1);
            }   
        }
        return ans;
    }
};
