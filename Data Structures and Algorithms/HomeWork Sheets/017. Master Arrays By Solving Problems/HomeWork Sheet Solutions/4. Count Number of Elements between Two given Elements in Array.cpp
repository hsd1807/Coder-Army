class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        //Complete the function 
        int index1=-1, index2=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==num1&&index1==-1) index1=i;
            else if(arr[i]==num2){
                index2=i;
            }
        }
      
        int ans=index2-index1-1;
        if(index2<0) return 0;
        else return ans;
    }
};
