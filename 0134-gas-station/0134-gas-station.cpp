class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int totalgas =0;
        int totalcost =0;
        int currgas =0;
        int stidx =0;
        for(int i =0;i<n;i++){
            totalgas += gas[i];
            totalcost += cost[i];
            currgas += (gas[i] - cost[i]);
            if(currgas < 0){
                stidx = i+1;
                currgas =0;
            }
        }
        return totalgas<totalcost ? -1 : stidx;
    }
};