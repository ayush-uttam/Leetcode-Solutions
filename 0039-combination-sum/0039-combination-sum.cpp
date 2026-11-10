class Solution {
public:
    void helper(int i,int n, int t, vector<int>&arr, vector<vector<int>>&res, vector<int>&temp){
        if(t==0){
            res.push_back(temp);
            return;
        }
        if(t<0||i==n) return;
        temp.push_back(arr[i]);
        helper(i,n,t-arr[i],arr,res,temp);
        temp.pop_back();
        helper(i+1,n,t,arr,res,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        helper(0,candidates.size(),target,candidates,res,temp);
        return res;
    }
};