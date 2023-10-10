class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int p=0,positive[100000],N=0,negative[100000];
        for(int i=0;i<n;i++){
            if(arr[i]>-0)
            {
                positive[p]=arr[i];
                p++;
            }
            else
            {
                negative[N]=arr[i];
                N++;
            }
        }
      
        for(int i=0;i<p;i++)
        arr[i]=positive[i];
        
        for(int i=p;i<n;i++)
        arr[i]=negative[i-p];
    }
};
