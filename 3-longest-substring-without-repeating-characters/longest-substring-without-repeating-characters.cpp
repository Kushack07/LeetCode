class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> freq ; 
        int left =0 ;
        int maxlen =0 ;
        int n =s.size();
        
        for(int right =0; right < n ;right++){
            while(freq[s[right]]>0){
                freq[s[left]]--;
                left ++;

            }
            freq[s[right]]++;
            maxlen =max(maxlen , right-left+1);
        }
        return maxlen;
    }
};