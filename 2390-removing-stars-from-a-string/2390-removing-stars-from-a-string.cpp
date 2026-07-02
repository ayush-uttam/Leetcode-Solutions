class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char x:s){
            if(x=='*'){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        string r="";
        while(!st.empty()){
            r+=st.top();
            st.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};