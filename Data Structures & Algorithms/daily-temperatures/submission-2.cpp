class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);   // pre-filled with 0 — matches "no warmer day" default
        stack<int> s;            // stack of indices

        for(int i = 0; i < n; i++)
        {
            while(!s.empty() && temperatures[s.top()] < temperatures[i])
            {
                int top = s.top();
                s.pop();
                ans[top] = i - top;   // assign by position, not push_back
            }
            s.push(i);
        }
        return ans;
    }
};