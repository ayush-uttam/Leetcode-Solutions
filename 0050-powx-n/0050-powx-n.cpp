class Solution {
public:
    double helper(double x, long long n){
    if(n==0)    return 1;
    if(n%2==0){
        return helper(x*x,n/2);
    }
    else{
        return x*helper(x,n-1);
    }
}
double myPow(double x, int n){
    long long nn=n;
    bool s=false;
    if(nn<0){
        s=true;
        nn=-nn;
    }
    double res=helper(x,nn);
    if(!s)   return res;
    else    return 1.0/res;

}
};