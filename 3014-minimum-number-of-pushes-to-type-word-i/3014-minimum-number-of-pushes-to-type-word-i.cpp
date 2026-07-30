class Solution {
public:
    int minimumPushes(string word) {
        int i,sum=0,n=word.size();;
        for(i=1;i<=n/8;i++){
            sum+=i*8;
        }
        sum+=i*(n%8);
        return sum;
    }
};