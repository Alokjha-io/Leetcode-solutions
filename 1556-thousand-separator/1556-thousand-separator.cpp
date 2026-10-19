class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        string ans;
        int count = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            ans.push_back(s[i]);
            count++;
            if(count%3==0 && i!=0)
            {
                ans.push_back('.');
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};