class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int lsum = 0;
        for(int x:nums) sum+=x;
        for(int i=0;i<nums.size();i++)
        {
            int rsum = sum-lsum-nums[i];
            if(rsum == lsum) return i;
            lsum+=nums[i];
        }
        return -1;
    }
};