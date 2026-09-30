class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0,diff=INT_MAX,res=0;
        sort(nums.begin(),nums.end());
        int i,l,r,n=nums.size();
        for(i=0;i<n;i++){
            l=i+1;
            r=n-1;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(abs(target-sum)<diff){
                    res=sum;
                    diff=abs(target-sum);
                }
                if(sum==target) break;
                else if(sum>target) r--;
                else    l++;
            }
        }

        return res;
    }
};