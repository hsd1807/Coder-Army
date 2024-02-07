class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        int cnt = 1;
        sort(arr, arr+n);
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] != 1)
                cnt++;
        }
        return cnt;
    }
};
