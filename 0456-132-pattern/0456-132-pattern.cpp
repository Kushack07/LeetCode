class Solution {
public:
int x=INT_MIN;
    bool find132pattern(vector<int>& a) {
        int n=a.size();if(n<3) return false;
        stack<int>st;for(int i=n-1;i>=0;i--){
            if(a[i]<x) return true;
            while(!st.empty()&&a[i]>st.top()){x=st.top();st.pop();}
            st.push(a[i]);
        }
        return false;
    }
};