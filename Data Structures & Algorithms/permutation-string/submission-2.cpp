class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>m;
        for(int i = 0; i<s1.size();i++)
        {
            m[s1[i]]++;
        }
        int i = 0 ;
        int j = s1.size()-1;
        while(j<s2.size())
        {
            if(m.find(s2[i])==m.end())
            {
                i++;
                j++;
            }
            else{
                m[s2[i]]--;
                i++;
                j++;
            }
        }
        for(auto a : m)
        {
            if(a.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};
