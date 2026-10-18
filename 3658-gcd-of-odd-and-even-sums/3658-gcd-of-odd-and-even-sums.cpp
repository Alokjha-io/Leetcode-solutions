class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = n*(n+1);
        int sumOdd = n*n;
        while(sumOdd !=0)
        {
            int temp = sumEven;
            sumEven = sumOdd;
            sumOdd = temp%sumOdd;
        }
        return sumEven;
    }
};