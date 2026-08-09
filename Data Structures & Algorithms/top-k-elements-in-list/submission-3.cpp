class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> m;

    for (int x : nums) {
        m[x]++;
    }

    vector<vector<int>> bucket(nums.size() + 1);

    for (auto it : m) {
        bucket[it.second].push_back(it.first);
    }

    vector<int> ans;

    for (int freq = nums.size(); freq >= 1; freq--) {
        for (int x : bucket[freq]) {
            ans.push_back(x);

            if (ans.size() == k)
                return ans;
        }
    }

    return ans;
}
};
