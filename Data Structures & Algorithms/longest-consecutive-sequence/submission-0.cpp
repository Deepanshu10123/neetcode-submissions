class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> v;

        // Put all elements in set
        for (int i = 0; i < nums.size(); i++) {
            v.insert(nums[i]);
        }

        int longest = 0;

        // Check every number
        for (auto x : v) {

            // x is the starting point
            if (v.find(x - 1) == v.end()) {

                int count = 1;

                // Check x+1, x+2, x+3...
                while (v.find(x + 1) != v.end()) {
                    count++;
                    x++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};