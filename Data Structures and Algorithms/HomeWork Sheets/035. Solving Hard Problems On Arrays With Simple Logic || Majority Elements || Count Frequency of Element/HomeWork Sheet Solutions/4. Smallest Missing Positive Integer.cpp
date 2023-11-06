class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int n=arr.size();
        bool one=false;

        for(int i=0;i<n;i++){
            if(arr[i]<1 || arr[i]>n)
            arr[i]=0;
            else if(arr[i]==1){
                arr[i]--;
                one=true;
            }
            else 
            arr[i]--;
        }

        if(!one) return 1;

        for(int i=0;i<n;i++){
                arr[arr[i]%n]+=n;
        }
        
        for(int i=1;i<n;i++){
            if(arr[i]/n==0)
            return i+1;
        }
        
        return n+1;
    }
};
