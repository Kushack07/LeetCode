class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low =0; 
        int maxlen = 0; 
        int n = s.size();
        int high = s.size()-1;
        unordered_map<char , int>c; 
        for(int high = 0; high<n ;high++){
            c[s[high]]++;
            while(c[s[high]]>1){
                c[s[low]]--;
                low++;
            }
                            maxlen = max(maxlen,high-low+1);

        }
        return maxlen ;
    }
};