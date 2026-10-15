class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i=0;
        {
            for(string s:operations)
            {
                if(s=="--X" || s=="X--")
                {
                    i-=1;
                }
                else if(s=="X++" || s=="++X")
                {
                    i+=1;
                }
            }
        }
        return i;
    }
};