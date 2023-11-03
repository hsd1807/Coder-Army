//Back-end complete function Template for C++
class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		int n=A.size();
		int i=0,j=n-1,ans=0;
		while(i<n && j>=0){
		    if(A[i][j]==0){
		        ans+=j+1;
		        i++;
		    }
		    else
		        j--;
		}
		return ans;
	}
};
