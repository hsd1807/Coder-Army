class Solution {
public:
    void permutations(vector<int>& arr, vector<vector<int>>& ans, int index) {
        if (index == arr.size()) {
            ans.push_back(arr); return;
        }
        for (int i = index; i < arr.size(); i++) {
            swap(arr[index], arr[i]);
            permutations(arr, ans, index+1);
            swap(arr[index], arr[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(nums, ans, 0);
        return ans;
    }
};
