
string encode(string src)
{     
  //Your code here 
  string res="";
  int n=src.length(),count=1;
  for(int i=1;i<n;i++){
      if(src[i]!=src[i-1]){
          res.push_back(src[i-1]);
          res.push_back((count+'0'));
          count=1;
      }
      else
        count++;    
  }
  res.push_back(src[n-1]);
          res.push_back((count+'0'));
  return res;
}
