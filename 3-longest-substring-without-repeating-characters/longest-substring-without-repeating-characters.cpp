class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0 ;
        int maxlen = 0; 
        unordered_map<char,int>mp;
        for(int high =0 ;high < s.size();high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            maxlen =max(maxlen,high-low+1);
        }
        return maxlen;
    }
};