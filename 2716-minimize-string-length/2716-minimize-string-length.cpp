class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int>f(26,0);
        int c=0;
        for(char x:s){
            if(f[x-'a']==0){
                c++;
                f[x-'a']++;
            }
        }
        return c;
    }
};