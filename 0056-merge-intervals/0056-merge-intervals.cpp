class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>>res;
        int a=arr[0][0];
        int b=arr[0][1];
        for(int i=0;i<n-1;i++){
            if(b>=arr[i+1][0]){
                b = max(b, arr[i+1][1]);
            }
            else{
                res.push_back({a,b});
                a=arr[i+1][0];
                b=arr[i+1][1];
            }
        }
        res.push_back({a,b});;
        return res;
    }
};