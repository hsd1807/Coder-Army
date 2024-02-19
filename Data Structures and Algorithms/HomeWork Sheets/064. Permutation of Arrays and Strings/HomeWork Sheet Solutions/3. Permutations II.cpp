class Solution {
public:
    void permute(vector<int>& arr, vector<vector<int>>& ans, int index) {
        if (index == arr.size()) {
            ans.push_back(arr);
            return;
        }
        vector<bool> visited(21, 0);
        for (int i = index; i < arr.size(); i++) {
            if (!visited[arr[i]+10]) {
            swap(arr[index], arr[i]);
            permute(arr, ans, index+1);
            swap(arr[index], arr[i]);
            visited[arr[i]+10] = 1;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums, ans, 0);
        return ans;
    }
};
