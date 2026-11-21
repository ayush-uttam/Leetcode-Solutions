class Solution {
public:

    void helper(int i, int n, vector<int>&arr, vector<int>&t, vector<vector<int>>&r){
        if(i==n){
            r.push_back(t);
            return;
        }
        t.push_back(arr[i]);
        helper(i+1,n,arr,t,r);
        t.pop_back();
        helper(i+1,n,arr,t,r);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>t;
        vector<vector<int>>r;
        helper(0,nums.size(),nums,t,r);
        return r;
    }   
};