class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,vector<int>>mpp;
        int i,n=arr.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            mpp[arr[i]].push_back(i);
        }
        int c=1;
        for(auto x:mpp){
            for(int y:x.second){
                res[y]=c;
            }
            c++;
        }
        return res;
    }
};