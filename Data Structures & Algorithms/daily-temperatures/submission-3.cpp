class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;  // stores indices

        for (int i = n - 1; i >= 0; i--) {

            // Remove all smaller or equal temperatures
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            // If stack not empty → next warmer day exists
            if (!st.empty()) {
                ans[i] = st.top() - i;
            }

            // Push current index
            st.push(i);
        }

        return ans;
    }
};