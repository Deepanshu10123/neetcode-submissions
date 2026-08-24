class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<double>s ;
        unordered_map<int,int> m;
        for(int i = 0 ; i<position.size(); i++)
        {
            m[position[i]]=speed[i];
        }
        sort(position.begin(),position.end());
        int count= 0 ;
        vector<int>v;
        for(int i = position.size()-1 ; i>=0 ; i--)
        {
            double time = (double) (target - position[i])/m[position[i]];
            if(s.empty() || time>s.top())
            {
                s.push(time);
            }   

        }
        return s.size();
    }
};
