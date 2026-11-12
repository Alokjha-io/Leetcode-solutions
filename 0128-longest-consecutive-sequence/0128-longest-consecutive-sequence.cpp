class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num(nums.begin(),nums.end());
        int longest = 0;
        for(int x:num)
        {
            if(num.find(x-1)==num.end())
            {
                int st = x;
                int length = 1;
                while(num.find(st+1)!=num.end())
                {
                    st++;
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;
    }
};