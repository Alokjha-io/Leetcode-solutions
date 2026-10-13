class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(char x:word)
        {
            if(x>='A' && x<='Z')
            {
                count++;
            }
        }
        if(count == 0 || count == word.length() || count == 1 && (word[0]>='A' && word[0]<='Z'))
        {
            return true;
        }
        return false;
    }
};