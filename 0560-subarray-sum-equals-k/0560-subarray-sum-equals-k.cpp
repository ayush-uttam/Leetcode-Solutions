class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]++;
        int i,s=0,r=0;
        for(i=0;i<nums.size();i++){
            s+=nums[i];
            if(mpp.find(s-k)!=mpp.end()){
                r+=mpp[s-k];
            }
            mpp[s]++;
        }
        return r;
    }
};