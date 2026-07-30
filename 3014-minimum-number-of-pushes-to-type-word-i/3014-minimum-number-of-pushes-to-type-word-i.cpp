class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int q=n/8;
        int r=n%8;
        int i;
        int sum=0;
        for(i=1;i<=q;i++){
            sum+=i*8;
        }
        sum+=i*r;
        return sum;
    }
};