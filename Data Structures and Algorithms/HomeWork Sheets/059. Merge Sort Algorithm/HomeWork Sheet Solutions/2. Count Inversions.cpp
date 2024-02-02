class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], int start, int mid, int end)
    {
        long long cnt = 0;
        vector<long long> temp(end - start + 1);
        int left = start, right = mid + 1, index = 0;
        while (left <= mid && right <= end){
            if (arr[left] <= arr[right]){
                temp[index] = arr[left++];
            }
            else{
                temp[index] = arr[right++];
                cnt += (mid - left + 1);
            }
            index++;
        }
        while (left <= mid) temp[index++] = arr[left++];
        while (right <= end) temp[index++] = arr[right++];
        index = 0;
        while (start <= end) arr[start++] = temp[index++];
        return cnt;
    }
    long long int mergeSort(long long arr[], int start, int end)
    {
        if (start == end)
            return 0;
        long long int c1, c2, c3;
        int mid = start + (end - start) / 2;
        c1 = mergeSort(arr, start, mid);
        c2 = mergeSort(arr, mid+1, end);
        c3 = merge(arr, start, mid, end);
        return c1 + c2 + c3;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        mergeSort(arr, 0, N-1);
    }
};
