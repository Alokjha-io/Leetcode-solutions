class Solution {
public:
    string triangleType(vector<int>& nums) {
        string s = "none";
        if (nums[0] == nums[1] && nums[1] == nums[2])
        {
            s = "equilateral";
        }
        else if ((nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]) && (nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0]))
        {
            s = "isosceles";
        }
        else if ((nums[0] != nums[1] && nums[1] != nums[2]) && (nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0]))
        {
            s = "scalene";
        }
        return s;
    }
};