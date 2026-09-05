class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int count=0;
        for(int num:nums)
        {
            if(count==0)
            {
                c = num;
            }
            count+=(num == c ? 1 : -1 );
            
        }
        return c;
    }
};