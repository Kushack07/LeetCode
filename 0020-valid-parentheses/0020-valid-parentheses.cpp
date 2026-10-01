class Solution {
public:
    bool isValid(string s) {
        stack<char>st ;
        for(char x : s){
            if(x=='('||x=='{'||x=='['){
                st.push(x);
            }
            else{
                if(st.empty())return false; 
                char top = st.top();
                st.pop();
                if(x==')'&& top!='(') return false;
                if(x=='}'&& top!='{')return false; 
                if(x==']'&& top!='[')return false; 
            }
            return st.empty();
        }
    }
};