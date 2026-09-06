class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0 ;
        int fast = 0 ; 
        do
        {
            slow=nums[slow];
            fast =nums[fast];
            fast =nums[fast];
            if(fast == slow)
            {
                slow = 0;
                break;
            }
        }while(fast != slow);
        while(fast!=slow)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

    }
};
