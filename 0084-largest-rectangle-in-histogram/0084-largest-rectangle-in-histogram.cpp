class Solution {
public:
    vector<int> nextSmallerElement(vector<int>&arr){
        stack<int>st;
        int n=arr.size();
        vector<int>res(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[i]<=arr[st.top()])    st.pop();
            res[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return res;
    }

    vector<int> prevSmallerElement(vector<int>&arr){
        stack<int>st;
        int n=arr.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[i]<=arr[st.top()])    st.pop();
            res[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return res;
    }
    int largestRectangleArea(vector<int>& arr) {
        vector<int>nse=nextSmallerElement(arr);
        vector<int>pse=prevSmallerElement(arr);
        int ma=0;
        for(int i=0;i<arr.size();i++){
            int ar=arr[i]*(nse[i]-pse[i]-1);
            ma=max(ma,ar);
        }
        return ma;
    }
};