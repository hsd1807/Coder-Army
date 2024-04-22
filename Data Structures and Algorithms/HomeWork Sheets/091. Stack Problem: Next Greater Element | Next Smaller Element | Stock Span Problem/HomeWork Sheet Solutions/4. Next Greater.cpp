class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp(nums2.size(), -1);
        stack<int> st;
        unordered_map<int, int> m;
        for (int i = 0; i < nums2.size(); i++) {
            m[nums2[i]] = i;
            while (!st.empty() && nums2[i] > nums2[st.top()]) {
                temp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++) {
            ans[i] = temp[m[nums1[i]]];
        }
        return ans;       
    }
};
