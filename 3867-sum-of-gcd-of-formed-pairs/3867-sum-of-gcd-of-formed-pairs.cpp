class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long s=0;
        vector<int>g;
        int m=0,n=nums.size();
        for(int i=0;i<n;i++){
            m=max(nums[i],m);
            g.push_back(gcd(m,nums[i]));
        }
        sort(g.begin(),g.end());
        int i=0,j=n-1;
        while(i<j){
            s+=gcd(g[i++],g[j--]);
        }
        return s;
    }
};