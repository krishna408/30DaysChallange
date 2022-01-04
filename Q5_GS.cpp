class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code her
	    set<ull> st;
	    st.insert(1);
	    n--;
	    while(n--){
	        auto it=st.begin();
	        ull x=*it;
	        st.erase(it);
	        st.insert(x*2);
	        st.insert(x*3);
	        st.insert(x*5);
	        
	    }
	   return  *st.begin();
	}
};
