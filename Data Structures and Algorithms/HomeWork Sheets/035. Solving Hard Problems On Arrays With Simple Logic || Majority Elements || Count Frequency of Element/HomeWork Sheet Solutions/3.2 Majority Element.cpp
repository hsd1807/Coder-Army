class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int candidate,count=0;
        for(int i=0;i<size;i++){
            if(count){
                if(a[i]==candidate) count++;
                else count--;
            }
            else{
                candidate=a[i];
                count++;
            }
        }
      
        count=0;
        for(int i=0;i<size;i++)
        if(a[i]==candidate) count++;
        return count>size/2?candidate:-1;
    }
};
