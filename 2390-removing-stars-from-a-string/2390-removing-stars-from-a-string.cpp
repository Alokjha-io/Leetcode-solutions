class Solution {
public:
    string removeStars(string s) {
        string result;
        for(char x:s)
        {
            if(x=='*')
            {
                result.pop_back();
            }
            else
            {
                result.push_back(x);
            }
        }
        
        return result;
    }
};