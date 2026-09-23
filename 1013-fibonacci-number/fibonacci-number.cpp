class Solution {
public:
    unordered_map<int,int>mp;
    int fib(int n) {
        if(n<2)return n ;
        if(mp.find(n)!=mp.end()){//mp.end() matlab nhi hai dp mai != matlab hai dp mai; 
            return mp[n];
        }
        int a1 = fib(n-1);
        int a2 = fib(n-2);
        int ans = a1+a2;
        mp[n]=ans; 
        return ans;
    }
};