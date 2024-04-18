//User function Template for C++

class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        stack<string> st;
        for (int i = 0; i < v.size(); i++) {
            if (st.empty()) {
                st.push(v[i]);
            }
            else if (v[i] == st.top()) {
                st.pop();
            }
            else {
                st.push(v[i]);
            }
        }
        return st.size();
    } 
};
