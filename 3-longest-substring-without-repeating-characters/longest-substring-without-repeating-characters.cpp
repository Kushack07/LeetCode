class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>fq;
        int low =0 ; 
        int n = s.size();
        int ans =0 ;
        for(int i = 0; i <n ;i++){
            fq[s[i]]++;
            while(fq[s[i]]>1){
                fq[s[low]]--;
                low++;
            }
            ans=max(ans,i-low+1);
        }
        return ans ; 
    }
};