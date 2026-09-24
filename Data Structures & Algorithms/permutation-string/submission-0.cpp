class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m;
        for(int i = 0; i<s1.size();i++)
        {
            m[s1[i]]++;
        }
        for(int i = 0 ; i<s2.size(); i++)
        {
            if(m.find(s2[i])!=m.end())
            {
                m[s2[i]]--;
            }
        }
        for(auto a :m)
        {
            if(a.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};
