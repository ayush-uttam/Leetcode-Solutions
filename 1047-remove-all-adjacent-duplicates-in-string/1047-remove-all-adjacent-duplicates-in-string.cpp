class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size()==0) return s;
        string res="";
        res+=s[0];
        for(int i=1;i<s.size();i++){
            if(!res.empty()&&res.back()==s[i])    res.pop_back();
            else    res+=s[i];
        }
        return res;
    }
};