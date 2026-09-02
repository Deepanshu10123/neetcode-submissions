class Solution {
public:
    bool checkInclusion(string s1, string s2) {

    if(s1.size() > s2.size())
        return false;

    unordered_map<char,int> m;
    unordered_map<char,int> win;

    for(int i = 0; i < s1.size(); i++)
    {
        m[s1[i]]++;
    }

    int i = 0;
    int j = s1.size() - 1;

    for(int n = 0; n <= j; n++)
    {
        win[s2[n]]++;
    }

    while(j < s2.size())
    {
        if(win == m)
        {
            return true;
        }

        win[s2[i]]--;

        if(win[s2[i]] == 0)
        {
            win.erase(s2[i]);
        }

        i++;
        j++;

        if(j < s2.size())
        {
            win[s2[j]]++;
        }
    }

    return false;
}

};
