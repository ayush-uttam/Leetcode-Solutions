class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // return((nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
        int a=INT_MIN,b=INT_MIN,idx=0,i,n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]>a){
                a=nums[i];
                idx=i;
            }
        }
        for(i=0;i<n;i++){
            if(nums[i]>b){
                if(i==idx)  continue;
                b=nums[i];
            }
        }
        return (a-1)*(b-1);
    }
};