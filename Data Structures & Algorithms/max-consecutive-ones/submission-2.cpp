class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        if(nums.size()<=1)
        {
            if(nums[0]==1)
            return 1;
            else
            return 0;
        }
        int ma = 0;
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