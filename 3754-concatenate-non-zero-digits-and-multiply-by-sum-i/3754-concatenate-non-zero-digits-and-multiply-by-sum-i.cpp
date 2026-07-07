class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0)    return 0;
        string s=to_string(n);
        long long p=0,q=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')   continue;
            int d=s[i]-'0';
            p+=d;
            p*=10;
            q+=d;
        }
        return p*q/10;
    }
};