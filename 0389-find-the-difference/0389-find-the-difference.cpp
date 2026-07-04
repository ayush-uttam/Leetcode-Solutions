class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>f(26,0);
        for(char x:s){
            f[x-'a']++;
        }
        for(char x:t){
            f[x-'a']++;
        }
        int i;
        for(i=0;i<f.size();i++){
            if(f[i]%2!=0)    break;
        }
        return (char)(i+'a');
    }
};