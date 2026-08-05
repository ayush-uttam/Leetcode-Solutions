class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>mpp;
        int ma=INT_MIN,mi=INT_MAX;
        for(int x:nums){
            ma=max(x,ma);
            mi=min(x,mi);
            mpp[x]++;
        }
        for(int i=mi;i<=ma;i++){
            if(mpp.find(i)==mpp.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};