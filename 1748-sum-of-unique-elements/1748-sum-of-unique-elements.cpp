class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count[101] = {0};
        for(int num:nums)
        {
            count[num]++;
        }
        int sum=0;
        for(int num:nums)
        {
            if(count[num]==1)
            {
                sum+=num;
            }
        }
        return sum;
        
    }
};