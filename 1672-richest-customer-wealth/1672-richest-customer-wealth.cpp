class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> result;
        int sum = 0;
        for(int i=0;i<accounts.size();i++)
        {
            for(int x : accounts[i])
            {
                sum+=x;
            }
            result.push_back(sum);
            sum=0;
        }
        return *max_element(result.begin(),result.end());
    }
};