class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        int ma = INT_MIN;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]==0)
            {
                count = 0 ;
            }
            if(nums[i]==1)
            {
                ma = max(count,ma);
                count++;
            }
        }
        return ++ma;
    }
};