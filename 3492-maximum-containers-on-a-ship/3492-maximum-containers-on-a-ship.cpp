class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int d = n*n;
        int count = 0;
        for(int i=1;i<=d;i++)
        {
            if(w*i<=maxWeight)
            {
                count++;
            }
        }
        return count;
    }
};