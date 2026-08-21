class Solution {
public:
    void solve(string input, string output , vector<string>& result){
        if(input.length()==0){
            result.push_back(output);
            return; 
        }
        if(isalpha(input[0])){
            string op1 =output ; 
            string op2 =output ; 
            op1.push_back(tolower(input[0]));
            op2.push_back(toupper(input[0]));
            input.erase(input.begin()+0);
            solve(input, op1,result);
            solve(input,op2, result );

        }else{
            string op = output;
            op.push_back(input[0]);
            input.erase(input.begin()+0);
            solve(input,op,result);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>result; 
        string output ="";
        solve(s,output , result);
        return result ; 
    }
};