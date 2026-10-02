class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int min_length = 0;
        int best = 0;
        while(i<=j)
        {
            min_length = min(height[i],height[j]);
            best = max(best,min_length*(j-i));
            if (height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            
        }
        return best;
    }
};