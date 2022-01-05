class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int> mp;
        for(int x:nums)
            mp[x%k]++;
        if(mp[0]%2!=0)
            return 0;
        for(auto i:mp){
            int freq=i.second;
            int x=i.first;
         if(x!=0&&mp[k-x]!=freq)
           return 0;
        }
        return 1;
    }
};
