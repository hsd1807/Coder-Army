class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i][0] == '+') {
                int x = st.top();
                int y = x;
                st.pop();
                x += st.top();
                st.push(y);
                st.push(x);
            }
            else if (operations[i][0] == 'D') {
                int x = st.top();
                st.push(2 * x);
            }
            else if (operations[i][0] == 'C') {
                st.pop();
            }
            else {
                int x = 0;
                if (operations[i][0] == '-') {
                    for (int k = 1; k < operations[i].size(); k++) {
                        x = x * 10 + (operations[i][k] - '0');
                    }
                    x = -x;
                }
                else {
                    for (int k = 0; k < operations[i].size(); k++) {
                        x = x * 10 + (operations[i][k] - '0');
                    }
                }
                st.push(x);
            }
        }
        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;  
    }
};
