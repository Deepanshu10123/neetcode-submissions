class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> a;

        for (int i = 0; i < nums.size(); i++) {
            a[nums[i]]++;
        }

        for (auto n : a) {
            if (n.second == 1) {
                return n.first;
            }
        }

        return -1;
    }
};
