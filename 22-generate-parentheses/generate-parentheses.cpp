class Solution {
public:
    vector<string>ans; 
    void gen(string s,int a,int b,int n){
        if(s.length()==2*n){
            ans.push_back(s);
            return;
        }
        if(a<n){
            gen(s+"(", a+1, b, n);
        }
        if(b<a){
            gen(s+")", a, b+1,n);
        }
    }
    vector<string> generateParenthesis(int n){
        gen("",0,0,n);
        return ans;
    }
};