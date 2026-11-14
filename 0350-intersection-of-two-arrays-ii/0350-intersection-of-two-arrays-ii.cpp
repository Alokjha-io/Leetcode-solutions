class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int x:nums1)
        {
            m[x]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m[nums2[i]]>0)
            {
                m[nums2[i]]--;
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};