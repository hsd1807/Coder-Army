class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        for(int row=0;row<n;row++){
            for(int col=0;col<row;col++){
                swap(matrix[row][col],matrix[col][row]);
            }
        }
    }
};
