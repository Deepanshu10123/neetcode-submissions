class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a;
        a.push_back(1);
        int mul = 1;
        for(int i = 1; i<nums.size(); i++)
        {
            mul = mul*nums[i-1];
            a.push_back(mul);
        }
        int mul2 = 1;
        for(int j = nums.size()-2 ; j>=0 ; j--)
        {
            mul2 = mul2*nums[j+1];
            a[j] = a[j] * mul2;
        }
        return a;
    }
};
