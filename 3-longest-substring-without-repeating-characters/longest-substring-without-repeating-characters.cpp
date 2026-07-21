class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>fq; 
        int n = s.size();
        int low =0;
        int ans =0 ;
        for(int high=0;high<n;high++){
            fq[s[high]]++;
            while(fq[s[high]]>1){
                fq[s[low]]--;
                low++;
            }
            ans= max(ans,high-low+1);
        }
        return ans; 
    }
};