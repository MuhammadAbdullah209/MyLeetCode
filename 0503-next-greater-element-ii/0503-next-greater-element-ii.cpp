class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> result(n, -1);
        for (int i = 0; i < 2 * n - 1; i++) {
            int current = nums[i % n];
            while (!st.empty() && nums[st.top()] < current) {
                result[st.top()] = current;
                st.pop();
            }
            if (i < n)
                st.push(i);
        }
        return result;
    }
};