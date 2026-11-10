class Solution {
public:
    void helper(int i, int n, vector<int>&arr,vector<vector<int>>&res,vector<int>temp){
        res.push_back(temp);
        for(int j=i;j<n;j++){
            if(j>i&&arr[j]==arr[j-1])   continue;
            temp.push_back(arr[j]);
            helper(j+1,n,arr,res,temp);
            temp.pop_back();
        }
        // helper(i+1,n,arr,res,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>t;
        sort(nums.begin(),nums.end());
        helper(0,nums.size(),nums,res,t);
        return res;
    }
};