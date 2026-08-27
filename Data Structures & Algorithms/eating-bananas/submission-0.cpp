class Solution {
public:
    int max(vector<int>& piles)
    {
        int max = INT_MIN;
        for(int i = 0 ; i<piles.size() ; i++)
        {
            if(max<piles[i])
            {
                max = piles[i];
            }
        }
        return max;
    }
    int fun(int mid , vector<int> & piles)
    {
        int count = 0 ;
        for(int i = 0 ; i<piles.size(); i++)
        {
            count =  count + (piles[i]+mid-1)/mid;
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        int low = 1;
        int high = max(piles);
        int ans = 0 ;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int hour = fun(mid, piles);

            if(hour>h)
            {
                low = mid+1;
            }
            else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans ;
    }
};
