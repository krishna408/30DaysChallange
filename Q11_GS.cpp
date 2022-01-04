class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        // partial correct optimazation in progress
        int *res=new int[2];
        for(int i=0;i<n;i++){
            int k=arr[i];
            if(k==-1){
                res[0]=i+1;
            }
            if(k>0)
            if(arr[k-1]==-1)
                res[0]=arr[i];
            else
            arr[k-1]=-1;
            
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                res[1]=i+1;
            }
        }
        
        return res;
    }
};
