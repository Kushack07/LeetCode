class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0 ;
        int maxlen = 0; 
        unordered_map<char,int>mp;
        for(int i =0 ;i < s.size();i++){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[low]]--;
                low++;
            }
            maxlen =max(maxlen,i-low+1);
        }
        return maxlen;
    }
};