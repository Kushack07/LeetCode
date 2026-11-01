class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp ;
        int low = 0; 
        int n  = s.size();
        if(n==0){
            return 0 ; 
        }
        int ml  = INT_MIN ; 
        for(int high=0;high<n;high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            ml = max(ml , high-low+1);
        }
        return ml ; 
    }
};