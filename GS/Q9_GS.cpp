class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        stack<int> st;
        string res="";
        for(int i=0;i<=S.length();i++){
            st.push(i+1);
            if(i==S.length()||S[i]=='I'){
                while(!st.empty()){
              res.push_back(st.top()+'0');
                    st.pop();
                }  
            }
        }
        return res;
    }
};
