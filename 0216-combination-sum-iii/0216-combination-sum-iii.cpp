class Solution {
public:

    void helper(int i, int t, int k, int n, vector<vector<int>>&res, vector<int>&temp){
        if(i==k||t>9){
            if(n==0&&i==k)    res.push_back(temp);
            return;
        }
        temp.push_back(t);
        helper(i+1,t+1,k,n-t,res,temp);
        temp.pop_back();
        helper(i,t+1,k,n,res,temp);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        if(k*(k+1)/2>n) return res;
        vector<int>t;
        helper(0,1,k,n,res,t);
        return res;        
    }
};