class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum = prices[0];
        int maxp = 0;
        for(int i=1;i<prices.size();i++)
        {
            minimum = min(minimum , prices[i]);
            maxp = max(maxp , prices[i]-minimum);
        }
        return maxp;
    }
};