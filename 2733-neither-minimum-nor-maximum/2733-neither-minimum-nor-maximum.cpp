class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];
        if(nums.size()>2)
        {
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i]>max)
                {
                    max = nums[i];
                }
                if(nums[i]<min)
                {
                    min = nums[i];
                }
            }
            for(int x:nums)
            {
                if(x>min && x<max)
                {
                    return x;
                }
            }
        }
        return -1;
    }
};