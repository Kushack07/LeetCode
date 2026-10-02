class Solution {
public:
    vector<string>ans; 
    void gen(string s ,int open,int close,int n){
        if(s.length()==2*n){
            ans.push_back(s);
            return; 
        }
        if(open<n){
            gen(s+"(",open+1,close,n);
        }
        if(close<open){
            gen(s+")",open,close+1,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        gen("",0,0,n);
        return ans;
    }
};