class Solution {
public:

    string encode(vector<string>& strs) {
        string ans;
        for(int i=0; i<strs.size(); i++)
        {
            ans += to_string(strs[i].size()) + "#" + strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> m;
        while(i<s.size())
        {
            string dig = "";
            while (s[i] != '#')
            {
                dig += s[i];
                i++;
            }
            int d = stoi(dig);
            string p = "";
            m.push_back(s.substr(i + 1, d));
            i=i+ 1+d;
        }
        return m;
    }
};
