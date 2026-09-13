class Solution {
public:
   int longestPalindrome(string s) {
    unordered_map<char,int> mp;

    for(char c : s) {
        mp[c]++;
    }

    int ans = 0;
    bool mid = false;

    for(auto x : mp) {
        ans += (x.second / 2) * 2;

        if(x.second % 2 == 1) {
            mid = true;
        }
    }

    if(mid) ans++;

    return ans;
    }
};