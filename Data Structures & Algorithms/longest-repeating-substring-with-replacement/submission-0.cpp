class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int i = 0 ;
        int j =0 ;
        int maxx = 0;
        for(int j = 0 ; j<s.size(); j++)
        {
            m[s[j]]++;
            m = std::max(maxx, m[s[j]]);

            int size = j-i+1;
            while(size - maxx >k)
            {
                m[s[i]]--;
                i++;
                size = j+i-1;
            }
            maxx = std::max(maxx,j-i+1);
        }
        return maxx;
    }
};
