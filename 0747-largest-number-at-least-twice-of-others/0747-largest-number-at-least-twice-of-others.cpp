class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_index = 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[max_index]<nums[i])
            {
                max_index = i;
            }
        }
        bool check = true;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]*2>nums[max_index] && i!=max_index)
            {
                check = false;
                break;
            }
        }
        if(check)
        {
            return max_index;
        }
        return -1;
    }
};