class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mpp1;
        unordered_map<char,int>mpp2;
        int c=INT_MAX;
        for(char x:s){
            mpp1[x]++;
        }
        for(char x:target){
            mpp2[x]++;
        }
        for(char x:target){
            if(mpp1[x]==0)   return 0;
            c=min(mpp1[x]/mpp2[x],c);
        }   
        return c;
    }
};