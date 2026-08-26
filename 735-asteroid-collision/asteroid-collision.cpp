class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;

        for (int i = 0; i < ast.size(); i++) {

            if (ast[i] > 0) {
                st.push(ast[i]);
            }
            else {
                bool alive = true;

                while (!st.empty() && st.top() > 0) {

                    if (st.top() < -ast[i]) {
                        st.pop();
                    }
                    else if (st.top() == -ast[i]) {
                        st.pop();
                        alive = false;
                        break;
                    }
                    else {
                        alive = false;
                        break;
                    }
                }

                if (alive)
                    st.push(ast[i]);
            }
        }

        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};