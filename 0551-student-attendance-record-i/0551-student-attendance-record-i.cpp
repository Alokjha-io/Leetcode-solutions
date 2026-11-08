class Solution {
public:
    bool checkRecord(string s) {
        int countL = 0;
        int countA = 0;
        int maxL = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                countA++;
                countL=0;
            }
            else if(s[i]=='L')
            {
                countL++;
            }
            else
            {
                countL=0;
            }
            maxL = max(maxL,countL);
        }
        return maxL<3 && countA<2;
    }
};