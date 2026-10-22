class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalCost=0,totalGas=0,diff=0,start=0,n=gas.size();
        for(int i=0;i<n;i++){
            totalCost+=cost[i];
            totalGas+=gas[i];
            diff+=gas[i]-cost[i];
            if(diff<0){
                start=(i+1);
                diff=0;
            }
        }
        if(totalGas<totalCost)  return -1;
        return start;
    }
};