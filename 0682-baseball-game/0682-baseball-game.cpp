class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int total = 0;
        for(string i : operations)
        {
            if(i=="C")
            {
                record.pop_back();
            }
            else if(i=="D")
            {
                record.push_back(record[record.size()-1]*2);
            }
            else if(i=="+")
            {
                record.push_back(record[record.size()-1]+record[record.size()-2]);
            }
            else
            {
                record.push_back(stoi(i));
            }
        }
        for(int j : record)
        {
            total+=j;
        }
        return total;
        
    }
};