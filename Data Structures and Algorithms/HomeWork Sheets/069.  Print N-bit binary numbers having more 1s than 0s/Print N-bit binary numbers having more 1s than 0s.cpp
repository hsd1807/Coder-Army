class Solution{
public:
    void binary(int one, int zero, int index, int n, vector<string>& ans, string temp) {
        if (index == n) {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back('1');
        binary(one+1, zero, index+1, n, ans, temp);
        temp.pop_back();
        
        if (one > zero) {
            temp.push_back('0');
            binary(one, zero+1, index+1, n, ans, temp);
            temp.pop_back();
        }
    }
	vector<string> NBitBinary(int N)
	{
	    vector<string> ans;
	    string temp = "1";
	    binary(1,0,1,N,ans,temp);
	    return ans;
	}
};
