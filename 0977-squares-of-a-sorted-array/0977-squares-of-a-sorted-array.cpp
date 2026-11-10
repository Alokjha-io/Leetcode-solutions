class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i=0;
        int j=n-1;
        int li=n-1;
        while(i<=j)
        {
            if(abs(nums[i])>abs(nums[j]))
            {
                ans[li--] = nums[i]*nums[i];
                i++;
            }
            else
            {
                ans[li--] = nums[j]*nums[j];
                j--;
            }
        }
        return ans;
    }
};