class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int r=0;
        int i,n=s.size();
        unordered_map<char,int>mpp;
        for(i=0;i<t.size();i++){
            mpp[t[i]]=i;
        }
        for(i=0;i<n;i++){
            r+=abs(i-mpp[s[i]]);
        }
        return r;
    }
};