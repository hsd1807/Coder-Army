class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cnt++;
            }
            else {
                if (!cnt)
                    ans++;
                else
                    cnt--;
            }
        }
        return ans + cnt;    
    }
};
