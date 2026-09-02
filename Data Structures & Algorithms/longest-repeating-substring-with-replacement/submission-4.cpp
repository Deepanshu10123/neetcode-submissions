class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> m;
        int i =0;
        int j=0 ;
        int maxf = 0 ;
        int winsize = 0;
        while(j!=s.size())
        {
            m[s[j]]++;
            maxf = max(maxf, m[s[j]]);
            if((j-i+1)-maxf<=k)
            {
                winsize = max(winsize, j - i + 1);
                j++;
            }
            else{
                
                m[s[i]]--;
                i++;
                m[s[j]]--;
            }
        }
        return winsize; 
    }
};
