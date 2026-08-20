class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> v1,v2;
        int i1=0,i2=0;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(v1[i1]>v2[i2]){
                v1.push_back(nums[i]);
                i1++;
            }
            else{
                v2.push_back(nums[i]);
                i2++;
            }
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        return v1;
    }
};