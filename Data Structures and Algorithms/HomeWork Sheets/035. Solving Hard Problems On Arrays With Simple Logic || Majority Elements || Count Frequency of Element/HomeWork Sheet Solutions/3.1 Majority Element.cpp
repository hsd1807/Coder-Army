class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate,count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                candidate=nums[i];
                count++;
            }
            else{
                if(nums[i]==candidate) count++;
                else count--;
            }
        }
        return candidate;
    }
};
