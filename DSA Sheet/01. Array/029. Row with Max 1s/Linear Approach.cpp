class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int row = 0, col = m - 1, index = -1;
	    while (row < n && col >= 0) {
	        if (arr[row][col] == 1)
	            index = row, col--;
	        else
	            row++;
	    }
	    return index;
	}
};
