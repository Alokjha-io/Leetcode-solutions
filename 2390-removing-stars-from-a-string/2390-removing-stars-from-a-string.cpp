class Solution {
public:
    string removeStars(string s) {
        vector<char> c;
        for(char x:s)
        {
            if(x=='*')
            {
                c.pop_back();
            }
            else
            {
                c.push_back(x);
            }
        }
        string a(c.begin(),c.end());
        return a;
    }
};