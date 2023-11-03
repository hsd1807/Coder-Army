class Solution
{
    public:
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        int i=0,j=m-1;
        while(i<n&&j>=0){
            if(matrix[i][j]==x){
                return 1;
            }
            else if(matrix[i][j]<x)
            i++;
            else
            j--;
        }
        return 0;
    }
};
