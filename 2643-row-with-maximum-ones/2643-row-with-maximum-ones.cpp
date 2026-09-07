class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> result;
        vector<int> ans;
        int count = 0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if (mat[i][j]==1)
                {
                    count++;
                }

            }
            result.push_back(count);
            count = 0;
        }
        ans.push_back(max_element(result.begin() , result.end())-result.begin());
        ans.push_back(*max_element(result.begin() , result.end()));
        return ans;
        
    }
};