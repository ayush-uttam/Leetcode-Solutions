class Solution {
public:
    int countValidPrefixes(string s) {
        int n=s.size();
        int i,j,c=0;
        int c0=0,c1=0;
        for(i=0;i<n;i++){
            if(s[i]=='0')
                c0++;
            else
                c1++;
            if(abs(c0-c1)==0||abs(c0-c1)==1)
                c++;
        }
        return c;
    }
};