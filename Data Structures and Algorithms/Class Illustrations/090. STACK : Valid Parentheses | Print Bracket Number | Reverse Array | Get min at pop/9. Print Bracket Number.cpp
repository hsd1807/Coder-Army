//User function template for C++
class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
	    vector<int> ans;
	    int count = 0;
	    stack<int> st;
	    for (int i = 0; i < S.size(); i++) {
	        if (S[i] == '(') {
	            count++;
	            ans.push_back(count);
	            st.push(count);
	        }
	        else if (S[i] == ')') {
	            ans.push_back(st.top());
	            st.pop();
	        }
	    }
	    return ans;
	}
};
