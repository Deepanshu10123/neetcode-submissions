class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>ans={};
        if(k==0 || nums.size()==0)
        {
            return ans ;
        }
        for(int i = nums.size()-1 ;i>=0; i--)
        {
            if(k!=0 && find(ans.begin(), ans.end(), nums[i]) == ans.end())
            {
                ans.push_back(nums[i]);
                k--;
            }
        }
        return ans;
    }
};
