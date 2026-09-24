class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        nums.sort();
        for(int i = 0 ; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
};