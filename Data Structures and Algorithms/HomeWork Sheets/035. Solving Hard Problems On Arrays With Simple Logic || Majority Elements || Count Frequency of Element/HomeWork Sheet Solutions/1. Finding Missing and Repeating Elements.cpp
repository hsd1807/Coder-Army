class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> ans(2);
        for(int i=0;i<n;i++){
            arr[i]--;
            arr[arr[i]%n]+=n;
        }
      
        for(int i=0;i<n;i++)
        if(arr[i]/n==2)
          ans[0]=i+1;
        else if(arr[i]/n==0)
          ans[1]=i+1;
        
        return ans;
    }
};
