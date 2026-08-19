class Solution {
public:
    int hammingDistance(int x, int y) {
        int XORhd = x^y;
        int count=0;
        while(XORhd)
        {
            XORhd &= (XORhd-1);
            count++;
        }
        return count;
    }
};