class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string x : tokens) {
            if (x != "+" && x != "-" && x != "*" && x != "/") {
                st.push(stoi(x)); //convert to int
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if (x == "+") st.push(a + b);
                if (x == "-") st.push(a - b);
                if (x == "*") st.push(a * b);
                if (x == "/") st.push(a / b);
            }
        }
        return st.top();
    }
};