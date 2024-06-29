class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans = 0;
        for (int i = 0; i <= k; i++) {
            ans += min(tickets[i], tickets[k]);
        }
        for (int i = k + 1; i < tickets.size(); i++) {
            ans += min(tickets[i], tickets[k] - 1);
        }
        return ans;
    }
};
