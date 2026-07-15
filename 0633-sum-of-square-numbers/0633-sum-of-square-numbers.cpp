class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0,j=(int)sqrt(c);
        while(i<=j){
            long long q=j*j;
            q+=i*i;
            if(c==q)    return true;
            else if(q<c)    i++;
            else    j--;
        }
        return false;
    }
};