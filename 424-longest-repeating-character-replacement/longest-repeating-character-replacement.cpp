class Solution {
public:
    int characterReplacement(string s, int k) {
        int n =s.size();
        int ml=INT_MIN ; 
        int low =0 ;
        int maxfreq =0 ; 
        unordered_map<char,int>mp; 
        for(int high=0;high<n;high++){
            mp[s[high]]++;
            maxfreq = max(maxfreq,mp[s[high]]);
            while((high-low+1)-maxfreq>k){
                mp[s[low]]--;
                low++;
            }
            ml= max(ml,high-low+1);
        }
        return ml;
    }
};