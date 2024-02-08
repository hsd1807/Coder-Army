class Solution{
    public:
    // This function wants you to modify the given input array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        int mx = arr[n-1]; mx++;
        int start = 0, end = n - 1;
        for (int i = 0; i < n; i++) {
            if (i%2) {
                arr[i] += mx * (arr[start++] % mx);
            }
            else {
                arr[i] += mx * (arr[end--] % mx);
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] / mx;
        }
    }
};
