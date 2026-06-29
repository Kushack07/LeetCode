class Solution {
public:
    int numOfStrings(vector<string>& pat, string word) {
        int cnt =0 ;
        for(string s : pat){
            if(word.find(s) !=string::npos){
                cnt++;
            }
        }
        return cnt;
    }
};