class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(char x:s){
            f1[x-'a']++;
        }
        for(char x:t){
            f2[x-'a']++;
        }
        int i;
        for(i=0;i<f1.size();i++){
            if(f1[i]!=f2[i])    break;
        }
        return (char)(i+'a');
    }
};