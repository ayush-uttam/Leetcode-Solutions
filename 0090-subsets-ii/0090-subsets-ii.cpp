class Solution {
public:
    void helper(int i, int n, vector<int>&arr,set<vector<int>>&res,vector<int>temp){
        if(i==n){
            res.insert(temp);
            return;
        }
        temp.push_back(arr[i]);
        helper(i+1,n,arr,res,temp);
        temp.pop_back();
        helper(i+1,n,arr,res,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        set<vector<int>>s;
        vector<int>t;
        sort(nums.begin(),nums.end());
        helper(0,nums.size(),nums,s,t);
        for(auto x:s)   res.push_back(x);
        return res;
    }
};