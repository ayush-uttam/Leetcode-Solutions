class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<string> v;
        vector<unordered_map<char,int>> mpp(n);
        for(int i=0;i<n;i++){
            for(char x:words[i]){
                mpp[i][x]++;
            }
        }
        for(char x='a';x<='z';x++){
            int mi=INT_MAX;
            for(int i=0;i<n;i++){
                if(mpp[i].find(x)==mpp[i].end())  mi=0;
                else
                    mi=min(mpp[i][x],mi);
            }
            for(int j=1;j<=mi;j++){
                v.emplace_back(1,x);
            }
        }
        return v;
    }
};