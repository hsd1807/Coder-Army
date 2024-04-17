class Solution {
public:
    void backspace (string& s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '#') {
                st.push(s[i]);
            }
            else if (!st.empty()) {
                st.pop();
            }
        }
        s = "";
        while (!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());
    }
    
    bool backspaceCompare(string s, string t) {
        backspace(s);
        backspace(t);
        if (s == t) {
            return true;
        }
        else {
            return false;
        }
    }
};
