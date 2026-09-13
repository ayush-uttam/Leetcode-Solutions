class Solution {
public:
    int myAtoi(string s) {
        int i=0,n=s.size();
        long long res=0;
        bool sign=false;
        while(s[i]==' ')    i++;
        if(s[i]=='-'||s[i]=='+'){
            if(s[i]=='-')   sign=true;
            i++;
        }
        while(i<n){
            if(sign){
                if(-res<=INT_MIN) return INT_MIN;
            }
            if(res>=INT_MAX) return INT_MAX;
            if(s[i]>='0'&&s[i]<='9'){
                res=res*10+(s[i]-'0');
            }
            else{
                break;
            }
            i++;
        }
        if(sign)    res=-res;
        if(res>INT_MAX) return INT_MAX;
        if(res<INT_MIN) return INT_MIN;
        return (int)res;
    }
};