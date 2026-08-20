class Solution {
public:
    string toLowerCase(string s) {
        for(char &a : s)
        {
            if ('A'<=a && a<='Z')
            {
                a+=32;
            }
        }
        return s;
    }

};