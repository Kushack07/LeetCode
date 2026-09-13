class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp ; 
        int n = text.size();
        for(char c:text){
            mp[c]++;
        }
        int cnt = min({
            mp['b'],
            mp['a'],
            mp['l']/2,
            mp['o']/2,
            mp['n']
        });
        return cnt; 
    }
};