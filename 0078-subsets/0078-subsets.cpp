class Solution {
public:

    void helper(int i,int n,vector<int>&arr,vector<vector<int>>&res,vector<int>temp){
        if(i>=n){
            res.push_back(temp);
            return;
        }
        temp.push_back(arr[i]);
        helper(i+1,n,arr,res,temp);
        temp.pop_back();
        helper(i+1,n,arr,res,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>t;
        helper(0,nums.size(),nums,res,t);
        return res;
    }   
};