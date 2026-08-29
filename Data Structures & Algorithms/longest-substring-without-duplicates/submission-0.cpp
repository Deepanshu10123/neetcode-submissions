class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int i = 0 ,j=0;
        int max = 0 ;
        while(j<s.size())
        {
            if(m[s[j]]==0)
            {
                m[s[j]]++;
                max = std:: max(max, j-i+1);
                j++;
            }
            else{
                m[s[i]]--;
                i++;
            }
            
        }
        return max;
    }
};
