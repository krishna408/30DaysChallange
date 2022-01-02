
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0,end=0;
        long long prod=1;
        int ans=0;
        for(;end<n;end++){
            prod*=a[end];
            while(start<n&&prod>=k)
                prod/=a[start++];
            ans+=end-start+1;    
        }
        return ans;
    }
};
