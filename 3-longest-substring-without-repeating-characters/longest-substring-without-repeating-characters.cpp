class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0 ; 
        int ml = 0; 
        int n = s.size();
        unordered_map<char,int>mp;
        for(int high=0;high < n ;high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }   
            ml = max(ml,high-low+1);
        }
        return ml ; 
    }
};