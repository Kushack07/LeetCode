class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!= t.size()){
            return false;
        }
        vector<int>freq(26,0);
        for(int x: s){
            freq[x-'a']++;
        }
        for(int y:t){
            freq[y-'a']--;
        }
        for(int h : freq){
            if (h!=0){
                return false;
            }
        }
        return true;
    }
};