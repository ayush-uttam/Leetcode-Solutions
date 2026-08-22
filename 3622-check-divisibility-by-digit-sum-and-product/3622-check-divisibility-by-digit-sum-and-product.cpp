class Solution {
public:
    bool checkDivisibility(int n) {
        int t=n,p=1,s=0;
        while(t!=0){
            int d=t%10;
            p*=d;
            s+=d;
            t/=10;
        }
        if(n%(p+s)==0)  return true;
        else   return false;
    }
};