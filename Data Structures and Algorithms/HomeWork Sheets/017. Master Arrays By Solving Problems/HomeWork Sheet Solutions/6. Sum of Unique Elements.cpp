class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int j;
            for(j=0;j<n;j++){
                if(i!=j && nums[i]==nums[j]){
                    break;
                }
            }
            if(j==n)
                sum+=nums[i];
        }
        return sum;
    }
};
