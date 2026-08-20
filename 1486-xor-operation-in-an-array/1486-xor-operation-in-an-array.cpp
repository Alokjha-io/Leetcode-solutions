class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> arr;
        for (int i=0;i<n;i++)
        {
            arr.push_back(start + 2*i);
        }
        int XOr = arr[0];
        for (int i=1;i<n;i++)
        {
            XOr = XOr ^ arr[i];
        }
        return XOr;
    }
};