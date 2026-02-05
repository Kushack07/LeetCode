class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int>count;
        for(char c:m){
            count[c]++;
        }
        for(char c : r){
            if(count[c]==0){
                return false;
            }
            count[c]--;
        }
        return true;
    }
};