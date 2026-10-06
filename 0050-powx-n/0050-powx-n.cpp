class Solution {
public:
    double myPow(double x, int n){
    double res=1.0;
    long long nn=n;
    bool ne=false;
    if(nn<0){
        ne=true;
        nn=-nn;
    }
    while(nn>0){
        if(nn%2==0){
            x=x*x;
            nn/=2;
        } 
        else{
            res*=x;
            nn-=1;
        }
    }
    if(ne)  res=1.0/res;
    return res;
}
};