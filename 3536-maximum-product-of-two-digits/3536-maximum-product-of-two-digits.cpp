class Solution {
public:
    int maxProduct(int n) {
        int mx = 0;
        int mx2 = 0;
        while(n>0)
        {
            int digit = n%10;
            n/=10;
            if(digit>mx)
            {
                mx2 = mx;
                mx = digit;
            }
            else if(digit>mx2)
            {
                mx2 = digit;
            }
        }
        return mx * mx2;
    }
};