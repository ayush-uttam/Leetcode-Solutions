class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        int c=1;
        while(mpp.find(k*c)!=mpp.end()){
            c++;
        }
        return k*c;
    }
};