class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int start=0,end=m*n-1,mid,row_index,col_index;

        while(start<=end){
            mid=start+(end-start)/2;
            row_index=mid/m;
            col_index=mid%m;

            if(matrix[row_index][col_index]==target)
            return 1;
            else if(matrix[row_index][col_index]<target)
            start=mid+1;
            else
            end=mid-1;
        }
        return 0;
    }
};
