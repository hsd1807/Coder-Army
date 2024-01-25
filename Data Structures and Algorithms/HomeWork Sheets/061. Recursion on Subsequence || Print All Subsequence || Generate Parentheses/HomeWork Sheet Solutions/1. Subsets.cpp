class Solution {
public:
    void subsequences(vector<int>& arr, int index, int n, vector<vector<int>>& ans, vector<int>& temp){
        if(index == n){
            ans.push_back(temp);
            return;
        }
        subsequences(arr, index+1, n, ans, temp);
        temp.push_back(arr[index]);
        subsequences(arr, index+1, n, ans, temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; vector<int> temp;
        subsequences(nums, 0, nums.size(), ans, temp);
        return ans;
    }
};
