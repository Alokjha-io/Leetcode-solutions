class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        for(int x:nums)
        {
            int sum = 0;
            while(x>0)
            {
                int digit = x%10;
                sum += digit;
                x/=10;
            }
            if(sum<min)
            {
                min = sum;
            }
        }
        return min;
    }
};