class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0;
        for(char x:s)
        {
            s_sum+=(int)x;
        }
        int t_sum = 0;
        for(char y:t)
        {
            t_sum+=(int)y;
        }
        int extra = t_sum - s_sum;
        char extra_ch = (char)extra;
        return extra_ch;
    }
};