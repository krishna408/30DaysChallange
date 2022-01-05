class Solution {
public:
    string decodeString(string &s,int &i){
        string res="";
        while(i<s.length()&&s[i]!=']'){
            if(isdigit(s[i])){
            int k=0;
            while(isdigit(s[i])&&i<s.length())
                k=k*10+s[i++]-'0';
            i++;
            string st=decodeString(s,i);
           
            while(k-- >0){
                res+=st;
            }
            i++;
        }
        else{
         res+=s[i++];      
        }
            
        }
        return res;
    }
    
    string decodeString(string s) {
        int i=0;
        return decodeString(s,i);
    }
};

