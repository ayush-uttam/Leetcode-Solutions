class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ma=nums[i];
            int mi=nums[i];
            for(int j=i;j<n;j++){
                ma=max(ma,nums[j]);
                mi=min(mi,nums[j]);
                sum+=(long long)(ma-mi);
            }
        }
        return sum;
    }
};