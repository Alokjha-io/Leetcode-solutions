class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int temp = 0;
        int x;
        for (int i:nums)
        {
            x = temp^i;
            temp = x;
        }
        return x;
    }
};