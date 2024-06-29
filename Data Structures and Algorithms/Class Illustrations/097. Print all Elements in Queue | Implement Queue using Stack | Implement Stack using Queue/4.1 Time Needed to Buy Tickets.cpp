class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n = tickets.size();
        int time = 0;
        queue<int> q;
        for (int i = 0; i < n; i++) {
            q.push(i);
        }
        while (tickets[k]) {
            tickets[q.front()]--;
            if (tickets[q.front()]) {
                q.push(q.front());
            }
            q.pop();
            time++;
        }
        return time;
    }
};
