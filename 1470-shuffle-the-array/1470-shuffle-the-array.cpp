class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int i = 0;
        int j = n;
        for(int x=0;x<n;x++)
        {
            result.push_back(nums[x+i]);
            result.push_back(nums[x+j]);
        }
        return result;
    }
};