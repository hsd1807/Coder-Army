class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > Matrix(n,vector<int>(n));
        int top=0,bottom=n-1,left=0,right=n-1,cnt=1;
        while(top <= bottom && left<= right){
            for(int j=left;j<=right;j++)
            Matrix[top][j]=cnt++;
            top++;
            for(int i=top;i<=bottom;i++)
            Matrix[i][right]=cnt++;
            right--;
            if(top<=bottom){
            for(int j=right;j>=left;j--)
            Matrix[bottom][j]=cnt++;
            bottom--;
            }
            if(left<=right){
            for(int i=bottom;i>=top;i--)
            Matrix[i][left]=cnt++;
            left++;
            }
        }
        return Matrix;
    }
};
