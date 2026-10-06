class Solution {
public:
    int mySqrt(int x) {
        int a = 0;
        for(long long i=1;i<=(x/2)+1;i++)
        {
            if(i*i==x)
            {
                return i;
            }
            else if(i*i>x)
            {
                a = i-1;
                break;
            }
        }
        return a;
    }
};