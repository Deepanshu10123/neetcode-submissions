class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int> ans;
        for(int i=0; i< nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int max = 0 ;
        int value = 0;
        while(k>0)
        {
            for(auto i : m)
            {
                if(max<i.second)
                {
                    max = i.second;
                    value = i.first;
                }
            }
            m.erase(value);
            ans.push_back(value);
            max = 0 ;
            k--;
        }
        return ans;
    }
};
