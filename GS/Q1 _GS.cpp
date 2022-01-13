class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<string,vector<string>> mp;
        string p;
        for(string &s:string_list){
            p=s;
            sort(p.begin(),p.end());
            mp[p].push_back(s);
        }
        
        vector<vector<string>> res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        
        return res;
    }
    
};
