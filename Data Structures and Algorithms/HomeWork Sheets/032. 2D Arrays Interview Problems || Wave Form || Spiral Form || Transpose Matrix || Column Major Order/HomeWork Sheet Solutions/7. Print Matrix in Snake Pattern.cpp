class Solution
{   
    public:/*Function to return list of integers visited in snake pattern in matrix.*/
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        int n=matrix.size();
        vector<int> ans;
        for(int row=0;row<n;row++){
            if(row%2==0)
                for(int col=0;col<n;col++)
                    ans.push_back(matrix[row][col]);
            else
                for(int col=n-1;col>=0;col--)
                    ans.push_back(matrix[row][col]);
        }
        return ans;
    }
};
