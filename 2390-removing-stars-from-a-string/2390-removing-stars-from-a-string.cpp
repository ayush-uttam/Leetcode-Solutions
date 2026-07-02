class Solution {
public:
    string removeStars(string s) {
        string r="";
        r+=s[0];
        int i;
        for(i=1;i<s.size();i++){
            if(s[i]=='*'){
                r.pop_back();
            }
            else{
                r+=s[i];
            }

        }
        return r;
    }
};