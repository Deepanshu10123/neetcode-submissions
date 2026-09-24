class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i = 0; i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int mx = 0;
        for(auto a:m)
        {
            if(a.second>mx)
            {
                mx = a.first;
            }
        }
        return mx;
    }
};