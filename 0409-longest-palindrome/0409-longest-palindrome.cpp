class Solution {
public:
    int longestPalindrome(string s) {
        int r=0;
        vector<int>f(54,0);
        for(char x:s){
            if(x<'a')   f[x-'A'+26]++; 
            else f[x-'a']++;
        }
        int i,c=0;
        for(i=0;i<54;i++){
            if(f[i]%2==0){
                r+=f[i];
            }
            else{
                c=1;
                r+=f[i]-1;
            }
        }
        return r+c;
    }
};