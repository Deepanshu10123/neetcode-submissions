class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int count = 0 ;
        while(s[i]==' ')
        {
            i++;
        }
        for(int j =i+1 ; j<s.size(); j++)
        {
            if(s[j]==' ')
            {
                break;
            }
            else{
                count++;
            }
        }
        return count+1;
    }
};