class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ma=INT_MIN,mi=INT_MAX;
        for(int x:nums){
            ma=max(ma,x);
            mi=min(mi,x);
        }
        return gcd(ma,mi);        
    }
};