class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int arr_sum = 0;
        for(int i : nums)
        {
            arr_sum+=i;
        }
        return sum-arr_sum;
        
    }
};