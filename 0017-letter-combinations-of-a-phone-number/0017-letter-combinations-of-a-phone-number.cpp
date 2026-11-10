class Solution {
public:

    vector<char> getMapping(char n){
        if(n=='2')  return {'a','b','c'};
        else if(n=='3')  return {'d','e','f'};
        else if(n=='4')  return {'g','h','i'};
        else if(n=='5')  return {'j','k','l'};
        else if(n=='6')  return {'m','n','o'};
        else if(n=='7')  return {'p','q','r','s'};
        else if(n=='8')  return {'t','u','v'};
        else if(n=='9')  return {'w','x','y','z'};
        return {};
    }

    void helper(int i, int n, string s, string d, vector<string>&res){
        if(i==n){
            res.push_back(s);
        }
        vector<char>c=getMapping(d[i]);
        for(char x:c){
            helper(i+1,n,s+x,d,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        helper(0,digits.size(),"",digits,res);
        return res;
    }
};