class Solution
{
	public:
	    void permute(string& str, vector<string>& ans, int index) {
	        if (index == str.size()) {
	            ans.push_back(str);
	            return;
	        }
	        vector<bool> visited(256, 0);
	        for (int i = index; i < str.size(); i++) {
	            if (!visited[str[i]]) {
	                swap(str[index], str[i]);
	                permute(str, ans, index+1);
	                swap(str[index], str[i]);
	                visited[str[i]] = 1;
	            }
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    permute(S, ans, 0);
		    return ans;
		}
};
