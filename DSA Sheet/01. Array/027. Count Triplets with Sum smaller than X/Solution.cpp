class Solution{	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    long long cnt = 0;
	    sort(arr, arr+n);
	    for (int i = 0; i < n - 2; i++) {
	        int start = i + 1, end = n - 1;
	        while (start < end) {
	            if (arr[i] + arr[start] + arr[end] >= sum)
	                end--;
	            else
	                cnt += end-start, start++;
	        }
	    }
	    return cnt;
	}
};
