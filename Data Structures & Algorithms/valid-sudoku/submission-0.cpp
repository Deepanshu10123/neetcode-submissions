class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0 ; i<9 ; i++)
        {
            unordered_set<char> a;
            for(int j = 0 ; j<9 ; j++)
            {
                if(board[i][j]=='.')
                    continue;
                if(a.find(board[i][j])!=a.end())
                    return false;
                a.insert(board[i][j]);
            }
            
        }
        for(int i = 0 ; i<9 ; i++)
        {
            unordered_set<char> b;
            for(int j = 0 ; j<9 ; j++)
            {
                if(board[j][i]=='.')
                    continue;
                if(b.find(board[j][i])!=b.end())
                    return false;
                b.insert(board[j][i]);
            }
        }
        for(int i = 0; i<9 ; i=i+3)
        {
            for(int j = 0 ; j<9 ; j=j+3)
            {
                unordered_set<char> c;
                for(int m = 0 ; m<3; m++)
                {
                    for(int n = 0 ; n<3 ; n++)
                    {
                        if(board[i+m][j+n]=='.')
                            continue;
                        if(c.find(board[i+m][j+n])!=c.end())
                            return false;
                        c.insert(board[i+m][j+n]);
                    }
                }
            }
        }
        return true;
    }
};
