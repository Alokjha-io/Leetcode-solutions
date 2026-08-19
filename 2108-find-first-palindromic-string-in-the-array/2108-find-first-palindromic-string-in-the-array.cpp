class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for (string s : words)

        {
            bool ispal = true;
            for (int i = 0; i < s.length() / 2; i++) {
                if (s[i] != s[s.length() - 1 - i]) {
                    ispal = false;
                    break;
                }
            }
            if (ispal)
                return s;
        }
        return "";
    }
};