class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(char x:s)
        {
            if(isalnum(x))
            {
                st.push_back(tolower(x));
            }
        }
        int i=0;
        int j=st.size()-1;
        
        while(i<j)
        {
            if(st[i] != st[j])
            {
                return false;
                
            }
            i++;
            j--;
        }
        return true;
    }
};