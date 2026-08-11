class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int i,n=nums.size(),idx=n-1,s=0;
        unordered_map<int,int>mpp;
        for(int x:nums){
            mpp[x]++;
        }
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]+1){
                idx=i-1;
                break;
            }
        }
        for(int i=0;i<=idx;i++){
            s+=nums[i];
        }
        while(1){
            if(mpp.find(s)!=mpp.end()){
                s++;
            }
            else{
                break;
            }
        }
        return s;
    }
};