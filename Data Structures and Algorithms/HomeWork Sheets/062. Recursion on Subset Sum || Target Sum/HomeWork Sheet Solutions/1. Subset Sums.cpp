class Solution
{
public:
    void Sums (vector<int>& arr, int index, int n, int sum, vector<int>& ans) {
        if (index == n) {
            ans.push_back(sum);
            return;
        }
        Sums(arr, index+1, n, sum, ans);
        Sums(arr, index+1, n, sum+arr[index], ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        Sums(arr, 0, N, 0, ans);
        return ans;
    }
};
