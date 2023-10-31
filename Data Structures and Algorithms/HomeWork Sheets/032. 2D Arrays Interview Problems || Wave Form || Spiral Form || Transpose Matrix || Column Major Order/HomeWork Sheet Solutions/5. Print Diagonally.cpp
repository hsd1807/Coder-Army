class Solution{
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		vector<int> ans;
		int sum=0;
		for(int top=0;top<N;top++){
		    int row=0,col=top;
		    while(row<N && col>=0){
		        ans.push_back(A[row][col]);
		        row++,col--;
		    }
		    sum++;
		}
		for(int right=1;right<N;right++){
		    int row=right,col=sum-right;
		    while(row<N && col>=0){
		        ans.push_back(A[row][col]);
		        row++,col--;
		    }
		    sum++;
		}
		
		return ans;
	}

};
