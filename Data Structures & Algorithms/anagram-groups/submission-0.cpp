class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapp;
        for(auto s : strs)
        {
            vector<int> arr(26,0);
            for(int i = 0 ; i<s.size(); i++)
            {
                arr[s[i]-'a']++;
            }

            string key = "";
            for(int i = 0 ; i<arr.size();i++)
            {
                key = key + (to_string(arr[i])+"#");
            }
            mapp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &m : mapp)
        {
            ans.push_back(m.second);
        }
        return ans;
    }
};
