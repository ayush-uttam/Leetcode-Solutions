class Solution {
public:
    string makeGood(string s) {
        if(s.size()<=1) return s;
        string res="";
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty()&&abs(st.top()-s[i])==32) st.pop();
            else    st.push(s[i]);
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};