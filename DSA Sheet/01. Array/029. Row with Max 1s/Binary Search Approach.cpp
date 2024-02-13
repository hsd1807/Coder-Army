class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int mx = INT_MIN, index = -1;
	    for (int i = 0; i < n; i++) {
	        int start = 0, end = m - 1, one = m;
	        while (start <= end) {
	            int mid = start + (end - start) / 2;
	            if (arr[i][mid] == 1) {
	                one = mid;
	                end = mid - 1;
	            }
	            else {
	                start = mid + 1;
	            }
	        }
	        int cnt = m - one;
	        if (cnt && cnt > mx) {
	            mx = cnt;
	            index = i;
	        }
	    }
	    return index;
	}

};
