class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(char x:jewels)
        {
            for(char y:stones)
            {
                if(x==y)
                {
                    count++;
                }
            }
        }
        return count;
    }
};