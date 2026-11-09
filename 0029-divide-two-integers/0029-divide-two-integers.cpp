class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        long long d1 = dividend;
        long long d2 = divisor;
        if(d1<0) d1 = -d1;
        if(d2<0) d2 = -d2;
        long long count = 0;
        while(d1>=d2)
        {
            long long temp = d2;
            long long x = 1;
            while((temp<<1)<=d1)
            {
                temp<<=1;
                x<<=1;
            }
            d1-=temp;
            count+=x;
        }
        if(dividend<0 && divisor>0) return -count;
        if(dividend>0 && divisor<0) return -count;
        return count;
    }
};