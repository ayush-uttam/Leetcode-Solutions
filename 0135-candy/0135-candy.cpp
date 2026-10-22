class Solution {
public:
    int candy(vector<int>&arr){
    int res=0;
    int n=arr.size();
    vector<int>c(n,1);
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]) c[i+1]=c[i]+1;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]) c[i]=max(c[i],c[i+1]+1);
    }
    for(int x:c)    res+=x;
    return res;
}
};