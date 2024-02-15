class Solution{
	public:
        bool divisible (vector<int>& arr, int index, int n, int m, int sum) {
            if (sum && sum % m == 0)
                return 1;
            if (index == n)
                return 0;
            return divisible(arr, index+1, n, m, sum) || divisible(arr, index+1, n, m, sum+arr[index]);
        }
		int DivisibleByM(vector<int>nums, int m){
		    return divisible(nums, 0, nums.size(), m, 0);
		}
};
