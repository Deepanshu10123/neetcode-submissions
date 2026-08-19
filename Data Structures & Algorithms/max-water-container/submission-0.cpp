class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 ;
        int j = heights.size()-1;
        int max = INT_MIN;
        while(i<j)
        {
            int low = min(heights[i],heights[j]);
            if((j-i)*low>max)
            {
                max = low*(j-i);
            }
            if(heights[i]>heights[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return max;
    }
};
