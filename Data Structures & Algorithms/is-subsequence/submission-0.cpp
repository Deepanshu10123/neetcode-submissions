class Solution {
public:
    bool isSubsequence(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int count = 0 ;
        for(int i = 0 ; i<t.size(); i++)
        {
            if(t[i]==s[count])
            {count++;}
        }
        if(count==s.size())
        return true;
        else
        return false;
    }
};