class Solution {
public:

    void helper(int i,int n, int t, vector<int>&arr, vector<vector<int>>&res, vector<int>&temp){
        if(t==0){
            res.push_back(temp);
            return;
        }
        if(t<0||i==n) return;
        for(int j=i;j<n;j++){
            if(j>i&&arr[j]==arr[j-1])   continue;
            if(arr[j]>t)    break;
            temp.push_back(arr[j]);
            helper(j+1,n,t-arr[j],arr,res,temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        helper(0,candidates.size(),target,candidates,res,temp);
        return res;
    }
};