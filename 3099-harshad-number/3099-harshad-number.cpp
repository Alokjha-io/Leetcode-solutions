class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        long long sum = 0;
        long long n = x;
        while(x>0)
        {
            int digit = x%10;
            sum+=digit;
            x/=10;
        }
        if(n%sum == 0) return sum;
        return -1;
    }
};