class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0 ; 
        int high= s.size()-1;
        int n = s.size();
        int maxLen= 0 ;
        unordered_map<char,int>f;

        for(high = 0 ; high <n ; high++){
            while(f[s[high]]>0){
                f[s[low]]--;
                low ++;
            }   
            f[s[high]]++ ;
            maxLen = max(maxLen,high-low+1);               
        }
        return maxLen;
    }
};