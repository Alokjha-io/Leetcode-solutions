class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool check = true;
        while(check)
        {
            check = false;
            for(int x:nums)
            {
                if(x==original)
                {
                    original *=2;
                    check = true;
                    break;
                }
            }
        }
        return original;
    }
};