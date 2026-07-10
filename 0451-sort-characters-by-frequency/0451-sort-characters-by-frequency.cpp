class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(auto x:s){
            mpp[x]++;
        }
        vector<pair<char,int>>v;
        for(auto x:mpp){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        string res="";
        for(auto x:v){
            res.append(x.second,x.first);
        }
        return res;
    }
};