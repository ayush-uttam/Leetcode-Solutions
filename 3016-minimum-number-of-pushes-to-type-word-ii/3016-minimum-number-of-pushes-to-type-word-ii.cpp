class Solution{
public:
    int minimumPushes(string word){
        vector<pair<char,int>>mpp(26);
        for(int i=0;i<26;i++){
            mpp[i]={'a'+i,0};
        }
        for(char x:word){
            mpp[x-'a'].second++;
        }
        sort(mpp.begin(), mpp.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });
        int cost=0,idx=0,mul=1;
        for(auto x:mpp){
            if(x.second==0) continue;
            idx++;
            cost+=mul*x.second;
            if(idx%8==0)    mul++;
        }
        return cost;
    }
};