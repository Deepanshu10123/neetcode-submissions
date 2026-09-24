class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        for(int i = 0 ; i<temperatures.size(); i++)
        {
            int count = 0 ;
            for(int j = i+1; j<temperatures.size(); j++)
            {
                if(temperatures[i]<temperatures[j])
                {
                    count =  j-i;
                    break;
                }
                                
            }
            ans.push_back(count);
        }
        return ans;
    }
};
