class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0 ; i<nums.size();i++)
        {
            int m = i+1;
            int n = nums.size()-1;
            while(m<n)
            {
                if(nums[m]+nums[n]+nums[i]==0)
                {
                    vector<int> a = {nums[i],nums[m],nums[n]};
                    ans.push_back(a);
                    break;
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
