class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0 ; i<nums.size();i++)
        {
            if( i>0 &&nums[i]==nums[i-1] )
                continue;
            int m = i+1;
            int n = nums.size()-1;
            while(m<n)
            {
                if(nums[m]+nums[n]+nums[i]==0)
                {
                    ans.push_back({nums[i], nums[m], nums[n]});
                    m++;
                    n--;

                    while (m < n && nums[m] == nums[m - 1]) m++;
                    while (m < n && nums[n] == nums[n + 1]) n--;
                }
                else if(nums[m]+nums[n]+nums[i]>0)
                {
                    n--;
                }
                else{
                    m++;
                }
            }
        }
        return ans;
    }
};
