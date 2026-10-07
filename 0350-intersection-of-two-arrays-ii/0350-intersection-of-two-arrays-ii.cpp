class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mpp1,mpp2;
        for(int x:nums1)    mpp1[x]++;
        for(int x:nums2)    mpp2[x]++;
        vector<int>v;
        for(auto x:mpp1){
            if(mpp2.find(x.first)!=mpp2.end()){
                for(int i=1;i<=min(mpp1[x.first],mpp2[x.first]);i++){
                    v.push_back(x.first);
                }
            }
        }
        return v;
    }
};