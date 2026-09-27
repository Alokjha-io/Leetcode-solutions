class Solution {
public:
    int climbStairs(int n) {
        int current = 1;
        int next = 1;
        for(int i=1;i<=n-1;i++)
        {
            int temp = next;
            next = current + next;
            current = temp;
        }
        return next;
    }
};