class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums.size()-1;j>=0;j--)
            {
                if (nums[i]>nums[j])
                {
                    count++;
                }
                
                
            }
            result.push_back(count);
            count = 0;
        }
        return result;
    }
};