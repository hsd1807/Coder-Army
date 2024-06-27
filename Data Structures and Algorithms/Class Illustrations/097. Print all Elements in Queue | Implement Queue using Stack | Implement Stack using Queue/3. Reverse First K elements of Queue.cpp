// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int> st;
        while (k--) {
            st.push(q.front());
            q.pop();
        }
        int n = q.size();
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        while (n--) {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
